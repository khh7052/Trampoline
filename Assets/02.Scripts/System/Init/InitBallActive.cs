using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitBallActive : InitActive
{
    public override void Init()
    {
        if(gameObject != GameManager.MainBall) return;

        base.Init();
    }

}
