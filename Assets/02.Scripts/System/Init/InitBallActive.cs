using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitBallActive : InitActive
{
    public override void Init()
    {
        if (GameManager.MainBall == null) return;
        if(gameObject != GameManager.MainBall.gameObject) return;

        base.Init();
    }

}
