using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum Direction
{
    LEFT,
    RIGHT,
    UP,
    DOWN
}

public class DirectionMove : MonoBehaviour
{
    public bool isChasing; // 공한테 방향 향하는지
    public Direction moveDirection;
    public float moveSpeed = 1f;
    private void Start()
    {
        if (isChasing)
        {
            DirectionUpdate();
        }
    }

    public void DirectionUpdate()
    {
        if(GameManager.MainBall.transform.position.x > transform.position.x)
        {
            moveDirection = Direction.RIGHT;
        }
        else
        {
            moveDirection = Direction.LEFT;
        }
    }

    void Update()
    {
        float move = moveSpeed * Time.smoothDeltaTime;

        switch (moveDirection)
        {
            case Direction.LEFT:
                transform.Translate(-move, 0, 0);
                break;
            case Direction.RIGHT:
                transform.Translate(move, 0, 0);
                break;
            case Direction.UP:
                transform.Translate(0, move, 0);
                break;
            case Direction.DOWN:
                transform.Translate(0, -move, 0);
                break;
        }
    }
}
