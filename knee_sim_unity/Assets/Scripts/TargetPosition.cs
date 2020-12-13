using UnityEngine;
using TMPro;

public class TargetPosition : MonoBehaviour
{
/* retrieving pose from two GameObjects, storing pose in variables and 
 * displaying pose via a text object
 * 
 * The TargetPosition class is retrieving the position and the rotation 
 * from the respective GameObjects and storing them to separate 
 * variables. GamePose1 represents the femur and GamePose2 the tibia.
 * Additionally the live data, i.e., the rotation quaternion and the 
 * position vector of the femur, is printed on to the video stream of the
 * ARCamera with the help of a description field. The field and the 
 * variables are updated every frame.
 */
    public GameObject GamePose1, GamePose2;
    public Vector3 position, pos1, pos2, rot1, rot2;
    public Quaternion rotq1, rotq2;

    void Update()
    {
        //store pose to variables
        pos1 = GamePose1.transform.position;
        pos2 = GamePose2.transform.position;
        rotq1 = GamePose1.transform.rotation;
        rotq2 = GamePose2.transform.rotation;

        //display rotation values
        GetComponent<TMP_Text>().text = "Femur Position:\n" + (pos1.x*100).ToString("f1") + "|" + (pos1.y*100).ToString("f1") + "|" + (pos1.z*100).ToString("f1") + "\nFemur Rotation:\n" + (rotq1.x-270).ToString("f1") + "|"+ (rotq1.y-180).ToString("f1") +"|"+ rotq1.z.ToString("f1");
    }
}