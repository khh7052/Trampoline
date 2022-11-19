using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Paint : Item
{
    public void BallUpdate()
    {
        playerBall.IsPainting = true;
    }

}
