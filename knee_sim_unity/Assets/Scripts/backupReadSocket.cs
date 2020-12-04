using UnityEngine;
using System.Collections;
using System.Net;
using System.Net.Sockets;
using System.Linq;
using System;
using System.IO;
using System.Text;
public class backupReadSocket : MonoBehaviour
{

    // Use this for initialization
    TcpListener listener;
    String msg;

    // Use this for initialization
    internal Boolean socketReady = false;
    TcpClient mySocket;
    NetworkStream theStream;
    StreamWriter theWriter;
    StreamReader theReader;
    String server = "127.0.0.1";
    Int32 port = 55000;

    // Buffer to store the response bytes.
    Byte[] data = new Byte[256];
    // String to store the response ASCII representation.
    String responseData = String.Empty;
    void Start()
    {
    }
    // Update is called once per frame
    void Update()
    {
        TcpClient client = new TcpClient(server, port);
        theStream = client.GetStream();
        // Read the first batch of the TcpServer response bytes.
        Int32 bytes = theStream.Read(data, 0, data.Length); //(**This receives the data using the byte method**)
        responseData = System.Text.Encoding.ASCII.GetString(data, 0, bytes); //(**This converts it to string**)
        Debug.Log(responseData);

    }
}