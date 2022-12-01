using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitEnable : BaseInit
{
    public Behaviour script;
    public bool active = true;

    public override void Init()
    {
        script.enabled = active;
    }
}
