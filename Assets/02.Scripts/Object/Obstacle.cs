using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacle : MonoBehaviour
{
    readonly float sideOffset = 0.1f;
    readonly float upOffset = 0.5f;
    Vector2 pos;

    public float spawnDistance = 20f;

    private void Update()
    {
        if(Ball.Instance.Height > transform.position.y + spawnDistance)
        {
            RandomSpawn();
        }
    }

    public void RandomSpawn()
    {
        float randX = Random.Range(-sideOffset, 1 + sideOffset);
        float randY = Random.Range(1, 1 + upOffset);
        pos.x = randX;
        pos.y = randY;
        pos = Camera.main.ViewportToWorldPoint(pos);
        transform.position = pos;
    }

    
}
