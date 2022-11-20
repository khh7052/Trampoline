using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitLineActive : InitActive
{
    [SerializeField] private PlayerLine line;

    public override void Init()
    {
        line.Active = active;
    }
}
