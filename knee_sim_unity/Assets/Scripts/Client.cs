using UnityEngine;
using System;
using System.Net.Sockets;
using System.Text;
using System.Globalization;
using System.Threading;

public class Client : MonoBehaviour
{
/* Initialization of the TCP client and an additional thread
 * 
 * The TCP client is initialized with an identical IP address and port 
 * number to the server script. Furthermore, an additional thread is 
 * initialized. As long as the bool mRunning stays true, the thread will 
 * be up and running. The necessary variables precision, timeLeft, 
 * lclforce, mclforce and the bool lcl initialized at this point will be 
 * used in later functions and explained there.
 */
    //client initialization
    public TcpClient socket;
    public NetworkStream theStream;
    readonly String Host = "127.0.0.1";
    readonly Int32 Port = 55000;

    //additional thread initialization
    private bool mRunning = true;
    Thread mThread;

    //initalization of necessary variables
    readonly int precision = 6;
    public static string lclforce = "0";
    public static string mclforce = "0";
    private bool lcl = true;

    void Start()
    {
/*Starting TCP client and additional thread with the ReadSocket function
 * 
 * The Start function is only called once when the Unity scene is 
 * started. First, the client is started, then the sockets are connected 
 * and the incoming communication data is stored in the NetworkStream 
 * variable theStream. In case of a successful connection the user is 
 * informed via the console. Second, the additional thread is started 
 * calling the ReadSocket function. Again, in case of a successful start,
 * the user will be informed via the console. 
 */
        //start client
        socket = new TcpClient(Host, Port);
        theStream = socket.GetStream();
        Debug.Log("sockets connected");

        //start thread
        ThreadStart ts = new ThreadStart(ReadSocket);
        mThread = new Thread(ts);
        mThread.Start();
        print("thread started");
    }

    void Update()
    {
/* Read Data from TargetPosition script and send data to server
 * 
 * The Update function is called every frame. It reads the public 
 * position vectors and the public rotation quaternions of the femur and
 * the tibia from the TargetPosition script and stores them in separate 
 * variables. These variables are then send to the server via the 
 * SentSocket function. However, before that, they have to be converted 
 * to strings with the PackageData function. This function is called 
 * twice; i.e., once for the femur and once for the tibia.
 */
        //read data from TargetPosition script
        Vector3 pos1 = GameObject.Find("FemurPose").GetComponent<TargetPosition>().pos1;
        Quaternion rot1 = GameObject.Find("FemurPose").GetComponent<TargetPosition>().rotq1;
        Vector3 pos2 = GameObject.Find("FemurPose").GetComponent<TargetPosition>().pos2;
        Quaternion rot2 = GameObject.Find("FemurPose").GetComponent<TargetPosition>().rotq2;

        //send data to the server
        SentSocket(PackageData(pos1, rot1, precision)+PackageData(pos2, rot2, precision));
    }

    private void SentSocket(string package)
    {
/* function for sending data to a network stream
 * 
 * The SentSocket function encodes the string package to bytes and writes
 * them to the NetworkStream theStream. In case of an error, the error 
 * message is printed in the console. 
 */
        try
        {
           byte[] sendBytes = Encoding.UTF8.GetBytes(package);
           theStream.Write(sendBytes, 0, sendBytes.Length);
        }
        catch (Exception e)
        {
            Debug.Log("Socket error: " + e);
        }
    }

    public static string PackageData(Vector3 pos1, Quaternion rot1, int precision)
    {
/* function for converting vector and quaternion to a single datastring
 * 
 * The packaging of the data is achieved by two nested functions. First, 
 * the PackageData function splits a vector and a quaternion into their 
 * respective parts and calls the CreateString function on each of them 
 * separately. Second, the individual strings created by the CreateString
 * function are concentated into a single long data string that is 
 * eventually returned.
 */
        string xpos = CreateString(pos1.x, precision);
        string ypos = CreateString(pos1.y, precision);
        string zpos = CreateString(pos1.z, precision);
        string wrot = CreateString(rot1.w, precision);
        string xrot = CreateString(rot1.x, precision);
        string yrot = CreateString(rot1.y, precision);
        string zrot = CreateString(rot1.z, precision);
        string datastring = xpos + ypos + zpos + wrot + xrot + yrot + zrot;
        return datastring;
    }

    public static string CreateString(double number, int length)
    {
/* function for creating a string with a predefined size
 * 
 * Since the server is expecting a fixed number of bytes, each individual
 * string has to have the same length. The length is defined by the 
 * length variable that is matched with the correspondent precision 
 * variable in the server script. It has to be made sure that the 
 * precision value is always greater than 1. First the value's sign is 
 * checked. In case the value is negative and the length is greater than 
 * 2, the number of decimal places is defined by the overall length 
 * reduced by three places, because every decimal contains at least 
 * "-0.". If the value is positive, the length is only reduced by two 
 * places, because the negative sign is omitted. In a while loop the 
 * number of decimal places is further reduced, until the string has 
 * exactly the right length. 
 * Exception 1: If the value originally does not contain any decimal 
 * places and the maximum number of places is not reached, a comma point 
 * is added.
 * Exception 2: If the length is too short, zeros are added to the end of
 * the string until the length of the string is satisfied.
 */
        string output = null;
        int decimalPlaces;

        //checking the value's sign
        if (number < 0 && length > 2)
        {
            decimalPlaces = length - 3;
        }
        else
        {
            decimalPlaces = length - 2;
        }
        bool isError = true;

        //further reduction of the length 
        while (isError && decimalPlaces >= 0)
        {
            output = Math.Round(number, decimalPlaces).ToString(CultureInfo.GetCultureInfo("en-GB"));
            isError = output.Length > length;
            decimalPlaces--;
        }

        //exception 1: output does not contain a point
        if (output.Length < length && !output.Contains("."))
        {
            output += '.';
        }

        //exception 2: output contains '.' but length is not satisfied
        if (output.Length < length) //
        {
            while (output.Length < length)
            {
                output += '0';
            }
        }
        return output;
    }

    private void ReadSocket()
    {
/* function for reading data from a network stream
 * 
 * The ReadSocket function is used to read data from a network stream. 
 * It is called in the additional thread and is therefore running 
 * simultaneously to the Update function. A buffer is created in order to
 * store the response bytes. While the bool mRunning is true, the 
 * theStream is read and stored alternately to the public variable 
 * lclforce and mclforce. Again, any error message is printed to the 
 * console. Finally is only used, if the function catches an exception, 
 * or the bool mRunning is set to false.
 */
        try
        {
            // Buffer to store the response bytes.
            Byte[] data = new Byte[1024];

            while (mRunning)
            {
                Int32 bytes = theStream.Read(data, 0, data.Length);
                if (bytes > 0)
                {
                    if (lcl)
                    {
                        lclforce = System.Text.Encoding.ASCII.GetString(data, 0, bytes);
                        lcl = false;
                    }
                    else
                    {
                        mclforce = System.Text.Encoding.ASCII.GetString(data, 0, bytes);
                        lcl = true;
                    }
                }
            }
        }
        catch (Exception e)
        {
            Debug.Log("Socket error: " + e);
        }
        finally
        {
            mRunning = false;
            Debug.Log("thread stopped");
        }
    }
    private void OnApplicationQuit()
    {
        //The function OnApplicationQuit sets the bool mRunning to false in order to stop the additional thread.
        mRunning = false; ;
    }
}


