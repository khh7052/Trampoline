using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraManager : MonoBehaviour
{
    public static Camera cam;


    public static float Height
    {
        get {
            if (cam == null) cam = Camera.main;
            return cam.transform.position.y;
        }
    }

    private void Awake()
    {
        cam = Camera.main;
    }

    public static float GetScreenLeftPos()
    {
        return cam.ViewportToWorldPoint(Vector3.left).y;
    }

    public static float GetScreenRightPos()
    {
        return cam.ViewportToWorldPoint(Vector3.right).y;
    }

    public static float GetScreenTopPos()
    {
        return cam.ViewportToWorldPoint(Vector3.up).y;
    }

    public static float GetScreenBottomPos()
    {
        return cam.ViewportToWorldPoint(Vector3.zero).y;
    }


}
