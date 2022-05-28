using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraResolution : MonoBehaviour
{
    private void Awake()
    {
        Camera cam = GetComponent<Camera>();

        Rect rect = cam.rect;

        float scale_height = ((float)Screen.width / Screen.height) / ((float)9 / 16); // (가로 / 세로)
        float scale_width = 1f / scale_height;

        if (scale_height < 1)
        {
            rect.height = scale_height;
            rect.y = (1f - scale_height) / 2f;
        }
        else
        {
            rect.width = scale_width;
            rect.x = (1f - scale_width) / 2f;
        }

        cam.rect = rect;
    }

    //private void OnPreCull()=>GL.Clear(true, true, Color.black);
}
