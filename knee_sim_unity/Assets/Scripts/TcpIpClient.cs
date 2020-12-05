using UnityEngine;
using System;
using System.Net.Sockets;
using System.Text;
using System.Globalization;
using System.Threading;

public class TcpIpClient : MonoBehaviour
{
    //client initialization
    internal Boolean socketReady = false;
    public TcpClient socket;
    public NetworkStream theStream;
    readonly String Host = "127.0.0.1";
    readonly Int32 Port = 55000;
    readonly int precision = 6;
    double timeLeft = 0.0;

    //thread initialization
    private bool mRunning;
    Thread mThread;
    // String to store the response ASCII representation.
    public static string lclforce;
    public static string mclforce;
    int i = 0;

    void Start()
    {
        //start client
        socket = new TcpClient(Host, Port);
        theStream = socket.GetStream();
        socketReady = true;
        Debug.Log("socket is set up");

        //start thread
        lclforce = "0";
        mclforce = "0";
        mRunning = true;
        ThreadStart ts = new ThreadStart(ReadSocket);
        mThread = new Thread(ts);
        mThread.Start();
        print("Thread started");
    }

    void Update()
    {
        //get data from target_distance script
        Vector3 pos1 = GameObject.Find("FemurPose").GetComponent<TargetPosition>().pos1;
        Quaternion rot1 = GameObject.Find("FemurPose").GetComponent<TargetPosition>().rotq1;
        Vector3 pos2 = GameObject.Find("FemurPose").GetComponent<TargetPosition>().pos2;
        Quaternion rot2 = GameObject.Find("FemurPose").GetComponent<TargetPosition>().rotq2;

        //send data in specific time intervall
        timeLeft -= Time.deltaTime;
        if (timeLeft < 0)
        {
            SentSocket(MakeStringArray(pos1, rot1, precision)+MakeStringArray(pos2, rot2, precision));
            timeLeft = 0.1;
        }
    }

    //method for sending data
    private void SentSocket(string package)
    {
        try
        {
            byte[] sendBytes = Encoding.UTF8.GetBytes(package);
            socket.GetStream().Write(sendBytes, 0, sendBytes.Length);
        }
        catch (Exception e)
        {
            Debug.Log("Socket error: " + e);
            Application.Quit();
        }
    }

    //create a dataarray as a string
    private string MakeStringArray(Vector3 pos1, Quaternion rot1, int precision)
    {
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

    //create a string out of a double number with the right length
    private string CreateString(double number, int length)
    {
        string output = null;
        int decimalPlaces;
        if (number < 0)
        {
            decimalPlaces = length - 3; //because every decimal contains at least "-0."
        }
        else
        {
            decimalPlaces = length - 2; //because every decimal contains at least "0."
        }
        bool isError = true;

        while (isError && decimalPlaces >= 0)
        {
            output = Math.Round(number, decimalPlaces).ToString(CultureInfo.GetCultureInfo("en-GB"));
            isError = output.Length > length;
            decimalPlaces--;
        }
        if (!output.Contains(".")) //output does not contain a point
        {
            output += '.';
        }
        if (output.Length < length) //output contains '.' but length is not satisfied
        {
            while (output.Length < length)
            {
                output += '0';  //add zeros to the end of output until length of string is satisfied
            }
        }
        return output;
    }

    //method for reading from the stream
    //called in separate thread
    private void ReadSocket()
    {
        try
        {
            // Buffer to store the response bytes.
            Byte[] data = new Byte[1024];
            Debug.Log("TCP-Client started");

            while (mRunning)
            {
                Int32 bytes = theStream.Read(data, 0, data.Length);
                if (bytes > 0)
                {
                    if (i == 0)
                    {
                        lclforce = System.Text.Encoding.ASCII.GetString(data, 0, bytes);
                        i = 1;
                        Debug.Log("lclforce: " + lclforce);
                    }
                    else
                    {
                        mclforce = System.Text.Encoding.ASCII.GetString(data, 0, bytes);
                        i = 0;
                        Debug.Log("mclforce: " + mclforce);
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
            Debug.Log("Thread stopped");
        }
    }
    private void OnApplicationQuit()
    {
        mRunning = false; ;
    }
}


