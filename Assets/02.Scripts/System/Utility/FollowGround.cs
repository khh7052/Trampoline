using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowGround : MonoBehaviour
{
    void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;
        Vector2 pos = transform.position;
        pos.x = GameManager.MainBall.transform.position.x;
        transform.position = pos;

        if (GameManager.BallHeight > 50) enabled = false;
    }

}
