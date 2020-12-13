using UnityEngine;
using System.Globalization;
using TMPro;

public class ResultIndicator : MonoBehaviour
{
    
    void Update()
    {
        //Experiment1
        //display result value
        //GetComponent<TMP_Text>().text = TcpIpClientExp1.result;

        //Experiment2
        //display result value
        GetComponent<TMP_Text>().text = "x-distance: " + TcpIpClientExp2.xdis + " cm\ny-distance: " + TcpIpClientExp2.ydis + " cm\nz-distance: " + TcpIpClientExp2.zdis +" cm";
    }
}
