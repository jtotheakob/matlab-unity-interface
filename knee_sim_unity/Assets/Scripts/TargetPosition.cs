using System.Collections;
using UnityEngine;
using System;
using TMPro;

public class TargetPosition : MonoBehaviour
{
    public GameObject GamePose1, GamePose2;
    public Vector3 position, pos1, pos2, rot1, rot2;
    public Quaternion rotq1, rotq2;

    void Update()
    {
        pos1 = GamePose1.transform.position;
        pos2 = GamePose2.transform.position;
        rotq1 = GamePose1.transform.rotation;
        rotq2 = GamePose2.transform.rotation;

        //display rotation values
        GetComponent<TMP_Text>().text = "Femur Position:\n" + (pos1.x*100).ToString("f1") + "|" + (pos1.y*100).ToString("f1") + "|" + (pos1.z*100).ToString("f1") + "\nFemur Rotation:\n" + (rotq1.x-270).ToString("f1") + "|"+ (rotq1.y-180).ToString("f1") +"|"+ rotq1.z.ToString("f1");
    }
}