using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitActive : BaseInit
{
    public bool active = true;

    public override void Init()
    {
        gameObject.SetActive(active);
    }
}
