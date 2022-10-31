using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnSprite : MonoBehaviour
{
    public RandomSpawn spawn;
    Vector2 scale;

    public bool isLeft = true; // ó�� ������ ��������

    private void Awake()
    {
        if(spawn == null)
            spawn = GetComponent<RandomSpawn>();

        spawn.OnSpawn.AddListener(SpriteDirectionUpdate);
    }


    void SpriteDirectionUpdate()
    {
        scale = transform.localScale;

        scale.x = Mathf.Abs(scale.x);

        if (isLeft)
        {
            if(Ball.Instance.Width > transform.position.x)
            {
                scale.x *= -1;
            }
        }
        else
        {
            if (Ball.Instance.Width < transform.position.x)
            {
                scale.x *= -1;
            }
        }

        transform.localScale = scale;
    }



}
