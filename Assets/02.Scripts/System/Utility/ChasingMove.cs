using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChasingMove : MonoBehaviour
{
    public float speed = 10f;


    void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;
        if (GameManager.MainBall == null) return;
        transform.position = Vector2.MoveTowards(transform.position, GameManager.MainBall.transform.position, speed * Time.smoothDeltaTime);
    }
}
