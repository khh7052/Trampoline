using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Soupbobble : Item
{
    public Rigidbody2D rigd;
    public Vector2 scaleOffset;
    private Transform previousParent;
    

    public override void Init()
    {
        ScaleUpdate();
        BallUpdate();
    }

    public void ScaleUpdate()
    {
        transform.localScale = (Vector2)playerBall.transform.localScale + scaleOffset;
    }

    public void BallUpdate()
    {
        previousParent = playerBall.transform.parent;
        rigd.velocity = playerBall.rigd.velocity;
        playerBall.rigd.velocity = Vector2.zero;
        playerBall.rigd.simulated = false;
        playerBall.transform.position = transform.position;
        playerBall.transform.parent = transform;
    }

    public override void Remove()
    {
        if(playerBall != null)
        {
            playerBall.transform.parent = previousParent;
            playerBall.rigd.simulated = true;
        }
        SoundManager.Instance.PlaySFX(removeSound);

        Destroy(gameObject);
    }

    public override void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Obstacle") || collision.CompareTag("Item")) return;

        if (collision.CompareTag("Ball"))
        {
            playerBall = GameManager.MainBall;
            Use();
        }
        else if (collision.CompareTag("Line"))
        {
            if (LineManager.Line.ColliderActive == true) Remove();
        }
        else
        {
            Remove();
        }
    }
}
