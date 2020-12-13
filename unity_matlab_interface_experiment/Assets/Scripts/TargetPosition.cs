using UnityEngine;
using TMPro;
using Vuforia;

public class TargetPosition : MonoBehaviour
{
    //retrieving pose from two GameObjects, storing pose in variables and displaying pose via a text object

    public GameObject Target1, Target2, Target3, Target4, Target5;
    public static Vector3 pos1, pos2, pos3, pos4, pos5;
    public static Quaternion rotq1, rotq2, rotq3, rotq4, rotq5;
    public static int target1, target2, target3, target4, target5;

    void Update()
    {
        //store target position to a vector and send to the server
        pos1 = Target1.transform.position;
        pos2 = Target2.transform.position;


        pos3 = Target3.transform.position;
        pos4 = Target4.transform.position;
        pos5 = Target5.transform.position;
        rotq1 = Target1.transform.rotation;
        rotq2 = Target2.transform.rotation;
        rotq3 = Target3.transform.rotation;
        rotq4 = Target4.transform.rotation;
        rotq5 = Target5.transform.rotation;
        
        //whenever a target is tracked, the value sent to Matlab changes
        if (IsTrackingMarker("Target1")) {target1 = 1;} else {target1 = 0;}
        if (IsTrackingMarker("Target2")) {target2 = 2;} else {target2 = 0;}
        if (IsTrackingMarker("Target3")) {target3 = 3;} else {target3 = 0;}
        if (IsTrackingMarker("Target4")) {target4 = 4;} else {target4 = 0;}
        if (IsTrackingMarker("Target5")) {target5 = 5;} else {target5 = 0;}

        //display rotation values
        //GetComponent<TMP_Text>().text = "Tracket Target: " + (target1, target2, target3, target4, target5);

    }
    private bool IsTrackingMarker(string imageTargetName)
    {
        var imageTarget = GameObject.Find(imageTargetName);
        var trackable = imageTarget.GetComponent<TrackableBehaviour>();
        var status = trackable.CurrentStatus;
        return status == TrackableBehaviour.Status.TRACKED;
    }

}