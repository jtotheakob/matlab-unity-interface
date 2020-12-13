using UnityEngine;

public class ComponentTesting : MonoBehaviour
{
    void Start()
    {
        //CreateString function component test
        //define edge cases
        double number;
        string result;
        int precision;
        int caseSwitch = 1;

        for (int i = 0; i < 6; i++)
        {
            switch (caseSwitch)
            {
                case 1: //number too long
                    number = -12.3456;
                    result = "-12.35";
                    precision = 6;
                    break;
                case 2: //number too short
                    number = 12.3;
                    result = "12.300";
                    precision = 6;
                    break;
                case 3: //number without comma and too short
                    number = 123;
                    result = "123.00";
                    precision = 6;
                    break;
                case 4: //positive number matches minimal precision
                    number = 1;
                    result = "1.";
                    precision = 2;
                    break;
                case 5: //negative number matches minimal precision
                    number = -1;
                    result = "-1";
                    precision = 2;
                    break;
                case 6: //number is zero
                    number = 0;
                    result = "0.0";
                    precision = 3;
                    break;
                default:
                    number = 0.12;
                    result = "0.1";
                    precision = 3;
                    break;
            }

            //call function
            string testresult = TcpIpClient.CreateString(number, precision);

            //check the results
            if (result == testresult)
            {
                Debug.Log("CreateString case " + caseSwitch + " component test successful");
            }
            else
            {
                Debug.Log("CreateString case " + caseSwitch + " component test failed");
            }
            caseSwitch += 1;
        }

        Debug.Log("CreateString function component test completed");

        //PackageData function component test

        //define edge cases
        Vector3 pos1;
        Quaternion rot1;
        caseSwitch = 1;

        for (int i = 0; i < 2; i++)
        {
            switch (caseSwitch)
            {
                case 1: //all values are zero
                    pos1 = new Vector3(0, 0, 0);
                    rot1 = new Quaternion(0, 0, 0, 0);
                    precision = 3;
                    result = "0.00.00.00.00.00.00.0";
                    break;

                case 2: //eigenvector and quaternion with 0 rotation
                    pos1 = new Vector3(1, 0, 0);
                    rot1 = new Quaternion(0, 0, 0, 1);
                    precision = 3;
                    result = "1.00.00.01.00.00.00.0";
                    break;

                default: 
                    pos1 = new Vector3(0, 0, 0);
                    rot1 = new Quaternion(0, 0, 0, 0);
                    precision = 3;
                    result = "0.00.00.00.00.00.00.0";
                    break;
            }

            //call function
            string testresult = TcpIpClient.PackageData(pos1, rot1, precision);

            //check the results
            if (result == testresult)
            {
                Debug.Log("PackageData case " + caseSwitch + " component test successful");
            }
            else
            {
                Debug.Log("PackageData case " + caseSwitch + " component test failed");
                Debug.Log(testresult);
            }
            caseSwitch += 1;
        }

        Debug.Log("PackageData function component test completed");
    }
}
