using UnityEngine;
using System.Collections;
using System.Net;
using System.Net.Sockets;
using System.Linq;
using System;
using System.IO;
using System.Text;
using System.Threading;

public class readSocket : MonoBehaviour
{

    //thread & listener initialization
    private bool mRunning;
    Thread mThread;

    void Start()
    {
        //start thread
        mRunning = true;
        ThreadStart ts = new ThreadStart(ReadSocket);
        mThread = new Thread(ts);
        mThread.Start();
        print("Thread started");
    }

    void Update()
    {
    }

    public void ReadSocket()
    {   
        try
        {
            TcpClient client = new TcpClient("127.0.0.1", 55001);
            NetworkStream theReadStream = client.GetStream();
            // Buffer to store the response bytes.
            Byte[] data = new Byte[1024];
            // String to store the response ASCII representation.
            String responseData = String.Empty;
            Debug.Log("TCP-Client started");

            while (mRunning)
            {
                Debug.Log("Listening for incoming traffic");
                Int32 bytes = theReadStream.Read(data, 0, data.Length);
                Debug.Log("Reading bytes");
                if (bytes > 0)
                {
                    responseData = System.Text.Encoding.ASCII.GetString(data, 0, bytes);
                    Debug.Log("Received: " + responseData);
                }
                else
                {
                    Debug.Log("Waiting for bytes to come!");
                }
            }
            Debug.Log("Here we are!");
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