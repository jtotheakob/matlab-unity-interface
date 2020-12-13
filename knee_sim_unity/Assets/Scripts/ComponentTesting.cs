using UnityEngine;

public class ComponentTesting : MonoBehaviour
{
    void Start()
    {
 /* The start function of the ComponentTesting is executed when deploying
  * the scene once. First the CreateString function and then the 
  * PackageData function is tested.This is due to the fact that the first
  * one is nested inside the second one. Both tests are accomplished 
  * similarly. Each test is nested inside a separate for loop. This loop 
  * executes every single edge case one after the other. Every case 
  * consists of a variable initialization, the calling of the function 
  * and a comparison of the output with the previously defined result. 
  * Every case the user is informed whether the test failed or succeeded.
  * Additionally, if the for loop is finished, the user gets notified 
  * that the test of the respective function is completed.
  */
        //CreateString function component test
        double number;
        string result;
        int precision;
        int caseSwitch = 1;

        for (int i = 0; i < 6; i++)
        {
            //define edge cases
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
                case 4: //positive number with minimal precision
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
            string testresult = Client.CreateString(number, precision);

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
        Vector3 pos1;
        Quaternion rot1;
        caseSwitch = 1;

        for (int i = 0; i < 2; i++)
        {
            //define edge cases
            switch (caseSwitch)
            {
                case 1: //all values are zero
                    pos1 = new Vector3(0, 0, 0);
                    rot1 = new Quaternion(0, 0, 0, 0);
                    precision = 3;
                    result = "0.00.00.00.00.00.00.0";
                    break;
                case 2: //directional vector and quaternion with 0 rotation
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
            string testresult = Client.PackageData(pos1, rot1, precision);

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
