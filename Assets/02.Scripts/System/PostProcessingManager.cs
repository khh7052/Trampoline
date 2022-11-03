using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;

public class PostProcessingManager : MonoBehaviour
{
    public Rigidbody2D ballRigd;
    PostProcessVolume volume;
    MotionBlur motionBlur;
    LensDistortion distortion;
    
    void Awake()
    {
        volume = GetComponent<PostProcessVolume>();
        volume.profile.TryGetSettings(out motionBlur);
        volume.profile.TryGetSettings(out distortion);
    }

    void Update()
    {
        if (ballRigd)
        {

        }
    }
}
