using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitTransform : BaseInit
{
    private Vector3 originPosition;
    private Quaternion originRotation;
    private Vector3 originScale = Vector3.one;

    public override void OneInit()
    {
        base.OneInit();
        originPosition = transform.position;
        originRotation = transform.rotation;
        originScale = transform.localScale;
    }

    public override void Init()
    {
        transform.position = originPosition;
        transform.rotation = originRotation;
        transform.localScale = originScale;
    }

}
