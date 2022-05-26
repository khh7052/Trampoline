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
    public RandomSpawn spawn;

    public Direction moveDirection;
    public float moveSpeed = 0.1f;

    private void Start()
    {
        spawn.OnSpawn.AddListener(DirectionUpdate);
        DirectionUpdate();
    }

    void DirectionUpdate()
    {
        if(Ball.Instance.transform.position.x > transform.position.x)
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
        float move = moveSpeed * Time.deltaTime;

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
