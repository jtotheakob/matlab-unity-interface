using UnityEngine;
using System.Globalization;
using TMPro;

public class Indicator : MonoBehaviour
{
    /*retrieving forces from TcpIpClient, deflecting the indicator on the spectrum and displaying the forces
    *
    *The Indicator class is responsible for displaying text to the user, but primarily for manipulating
    *the indicator on the spectrum. Dependant on the forces found in the TcpIpClient script, the indicator 
    *is deflected more or less in the y-direction. This is achieved by setting the position of the indicator
    *to the sum of two other vectors; i.e., the origin of the spectrum in 3D-space and a translation vector 
    *called transvecl for the left indicator that is transformed to the orientation of the spectrum. The 
    *same principle applies to the right indicator with the vector transvecr. Since the Indicator should 
    *float above the spectrum, an additional z-value is added. 
     */
    public GameObject IndicatorPoseLeft, IndexPoseLeft, IndicatorPoseRight, IndexPoseRight;
    public Vector3 transvecl, transvecr;
    float forceleft = 0;
    float forceright = 0;

    void Start()
    {
        transvecl.x = 0;
        transvecl.y = 0;
        transvecl.z = float.Parse("+0,0001");

        transvecr.x = 0;
        transvecr.y = 0;
        transvecr.z = float.Parse("+0,0001");
    }

    void Update()
    {
        //display force values
        GetComponent<TMP_Text>().text = "LCL-force: " + TcpIpClient.lclforce +" N\n" + "MCL-force: " + TcpIpClient.mclforce + " N";

        //deflect indicator on the spectrum
        forceleft = float.Parse(TcpIpClient.mclforce, CultureInfo.InvariantCulture.NumberFormat);
        forceright = float.Parse(TcpIpClient.lclforce, CultureInfo.InvariantCulture.NumberFormat);
        transvecl.y = (forceleft);
        transvecr.y = (forceright);
        IndicatorPoseLeft.transform.position = IndexPoseLeft.transform.position + IndexPoseLeft.transform.TransformDirection(transvecl);
        IndicatorPoseRight.transform.position = IndexPoseRight.transform.position + IndexPoseRight.transform.TransformDirection(transvecr);
    }
}
