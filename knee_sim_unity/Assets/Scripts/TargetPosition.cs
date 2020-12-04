using System.Collections;
using UnityEngine;
using System;
using TMPro;

public class TargetPosition : MonoBehaviour
{
    public GameObject GamePose1, GamePose2;
    public Vector3 position, pos1, pos2, rot1, rot2;
    public Quaternion rotq1, rotq2;


    void Start()
    {

    }

    void Update()
    {
        pos1 = GamePose1.transform.position;
        pos2 = GamePose2.transform.position;
        rotq1 = GamePose1.transform.rotation;
        rotq2 = GamePose2.transform.rotation;
        rot1 = Quat2Eul(rotq1);
        rot2 = Quat2Eul(rotq2);

         

        //display rotation values
        GetComponent<TMP_Text>().text = "Femur Position:\n" + (pos1.x*100).ToString("f1") + "|" + (pos1.y*100).ToString("f1") + "|" + (pos1.z*100).ToString("f1") + "\nFemur Rotation:\n" + (rot1.x-270).ToString("f1") + "|"+ (rot1.y-180).ToString("f1") +"|"+ rot1.z.ToString("f1");
    }

    //convert quaternion to euler angles and return Vector3
    public static Vector3 Quat2Eul(Quaternion q1)
    {
        float sqw = q1.w * q1.w;
        float sqx = q1.x * q1.x;
        float sqy = q1.y * q1.y;
        float sqz = q1.z * q1.z;
        float unit = sqx + sqy + sqz + sqw; // if normalised is one, otherwise is correction factor
        float test = q1.x * q1.w - q1.y * q1.z;
        Vector3 v;

        if (test > 0.4995f * unit)
        { // singularity at north pole
            v.y = 2f * Mathf.Atan2(q1.y, q1.x);
            v.x = Mathf.PI / 2;
            v.z = 0;
            return NormalizeAngles(v * Mathf.Rad2Deg);
        }
        if (test < -0.4995f * unit)
        { // singularity at south pole
            v.y = -2f * Mathf.Atan2(q1.y, q1.x);
            v.x = -Mathf.PI / 2;
            v.z = 0;
            return NormalizeAngles(v * Mathf.Rad2Deg);
        }
        Quaternion q = new Quaternion(q1.w, q1.z, q1.x, q1.y);
        v.y = (float)Math.Atan2(2f * q.x * q.w + 2f * q.y * q.z, 1 - 2f * (q.z * q.z + q.w * q.w));     // Yaw
        v.x = (float)Math.Asin(2f * (q.x * q.z - q.w * q.y));                             // Pitch
        v.z = (float)Math.Atan2(2f * q.x * q.y + 2f * q.z * q.w, 1 - 2f * (q.y * q.y + q.z * q.z));      // Roll
        return NormalizeAngles(v * Mathf.Rad2Deg);
    }

    static Vector3 NormalizeAngles(Vector3 angles)
    {
        angles.x = NormalizeAngle(angles.x);
        angles.y = NormalizeAngle(angles.y);
        angles.z = NormalizeAngle(angles.z);
        return angles;
    }

    static float NormalizeAngle(float angle)
    {
        while (angle > 360)
            angle -= 360;
        while (angle < 0)
            angle += 360;
        return angle;
    }
}
