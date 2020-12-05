using UnityEngine;
using System.Globalization;
using TMPro;

public class Indicator : MonoBehaviour
{
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
        GetComponent<TMP_Text>().text = "LCL-force: " + TcpIpClient.lclforce +"\n" + "MCL-force: " + TcpIpClient.mclforce;

        forceleft = float.Parse(TcpIpClient.mclforce, CultureInfo.InvariantCulture.NumberFormat);
        forceright = float.Parse(TcpIpClient.lclforce, CultureInfo.InvariantCulture.NumberFormat);
        transvecl.y = (forceleft);
        transvecr.y = (forceright);
        IndicatorPoseLeft.transform.position = IndexPoseLeft.transform.position + IndexPoseLeft.transform.TransformDirection(transvecl);
        IndicatorPoseRight.transform.position = IndexPoseRight.transform.position + IndexPoseRight.transform.TransformDirection(transvecr);
    }
}
