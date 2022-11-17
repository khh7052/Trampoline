using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnSprite : MonoBehaviour
{
    Vector2 scale;
    public bool isLeft = true; // ó�� ������ ��������
    float ballPos;

    public void SpriteDirectionUpdate()
    {
        scale = transform.localScale;
        scale.x = Mathf.Abs(scale.x);
        ballPos = GameManager.MainBall.transform.position.x;

        if (isLeft)
        {
            if(transform.position.x < ballPos)
            {
                scale.x *= -1;
            }
        }
        else
        {
            if (ballPos < transform.position.x)
            {
                scale.x *= -1;
            }
        }

        transform.localScale = scale;
    }



}
