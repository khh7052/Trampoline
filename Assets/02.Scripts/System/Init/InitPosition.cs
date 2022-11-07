using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitPosition : BaseInit
{
    private Vector3 originPos;

    public override void OneInit()
    {
        base.OneInit();
        originPos = transform.position;
    }

    public override void Init()
    {
        transform.position = originPos;
    }
}
