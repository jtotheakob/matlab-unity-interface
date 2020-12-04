using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using System.Net;
using System.Net.Sockets;
using System;
using System.IO;
using System.Text;
using System.Globalization;


public class SimpleTcpClient : MonoBehaviour
{
#if UNITY_EDITOR
    System.Net.Sockets.TcpClient client;
    System.Net.Sockets.NetworkStream stream;
#else
    private Windows.Networking.Sockets.StreamSocket socket;
#endif

    string host = "10.0.7.83";
    string port = "9000";
    private StreamWriter writer;
    private StreamReader reader;

    double timeintervall = 1;
    double timeLeft = 0;
    string data = "Ping";

    // Start is called before the first frame update
    void Start()
    {
        ConnectToMatlab(host, port);
    }

    // Update is called once per frame
    void Update()
    {
        timeLeft -= Time.deltaTime;
        if (timeLeft < 0)
        {
            SendData(data);
            timeLeft = timeintervall;
        }

    }

#if UNITY_EDITOR
    private void ConnectToMatlab(string host, string port)
    {
        Debug.Log("calling unity connection method");
        System.Diagnostics.Debug.WriteLine("calling unity connection method");

        try
        {
            client = new System.Net.Sockets.TcpClient(host, Int32.Parse(port));
            stream = client.GetStream();
            reader = new StreamReader(stream);
            writer = new StreamWriter(stream) { AutoFlush = true };

            Debug.Log("Connected!");

            writer.Write(data);
            Debug.Log("data sent");

        }
        catch (Exception e)
        {
            Debug.Log(e.ToString());
        }
    }

#else
    private async void ConnectToMatlab(string host, string port)
    {
        Debug.Log("calling UWP connection method");
        System.Diagnostics.Debug.WriteLine("calling UWP connection method");
        try
        {
            socket = new Windows.Networking.Sockets.StreamSocket();
            Windows.Networking.HostName serverHost = new Windows.Networking.HostName(host);
            await socket.ConnectAsync(serverHost, port);

            Stream streamOut = socket.OutputStream.AsStreamForWrite();
            writer = new StreamWriter(streamOut) { AutoFlush = true };

            Stream streamIn = socket.InputStream.AsStreamForRead();
            reader = new StreamReader(streamIn);

            System.Diagnostics.Debug.WriteLine("Connected!");

            writer.Write(data);
            System.Diagnostics.Debug.WriteLine("data sent");
        }
        catch (Exception e)
        {
            System.Diagnostics.Debug.WriteLine(e.ToString());
        }
    }
#endif
    public void SendData(string data)
    {
        writer.Write(data);
        Debug.Log("data sent");
        System.Diagnostics.Debug.WriteLine("data sent");
    }
}
