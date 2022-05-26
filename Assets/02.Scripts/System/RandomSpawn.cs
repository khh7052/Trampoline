using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class RandomSpawn : MonoBehaviour
{
    public UnityEvent OnSpawn = new();

    public readonly float sideOffset = 0.1f;
    public readonly float upOffset = 0.5f;
    Vector2 pos;

    public float spawnDistance = 20f;

    private void Update()
    {
        if (Ball.Instance.Height > transform.position.y + spawnDistance)
        {
            Spawn();
        }
    }

    public void Spawn()
    {
        float randX = Random.Range(-sideOffset, 1 + sideOffset);
        float randY = Random.Range(1, 1 + upOffset);
        pos.x = randX;
        pos.y = randY;
        pos = Camera.main.ViewportToWorldPoint(pos);
        transform.position = pos;

        OnSpawn.Invoke();
    }


}
