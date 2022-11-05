using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public enum SpawnType
{
    UP,
    SIDE,
    ALL
}

public class RandomSpawn : MonoBehaviour
{
    public UnityEvent OnSpawn = new();

    public float minSideOffset = 0f;
    public float maxSideOffset = 0.1f;
    public float minUpOffset = 0f;
    public float maxUpOffset = 0.5f;
    Vector2 pos;

    public bool fixedY;
    public float fixedUpOffset = 0.1f;

    public SpawnType spawnType;
    public float spawnDistance = 20f;

    private void Update()
    {
        if (Ball.Instance.Height > transform.position.y + spawnDistance)
        {
            Spawn();
        }
    }

    float RandomSide_Up()
    {
        return Random.Range(minSideOffset, maxSideOffset);
    }

    float RandomSide_Side()
    {
        float rand = Random.Range(0, 2);

        if (rand == 0)
        {
            rand = Random.Range(-minSideOffset, -maxSideOffset);
        }
        else
        {
            rand = Random.Range(1 + minSideOffset, 1 + maxSideOffset);
        }

        return rand;
    }

    public void Spawn()
    {
        float randX = 0;
        float randY = 0;

        if(spawnType == SpawnType.ALL)
        {
            int type = Random.Range(0, 2);

            if(type == 0)
            {
                randX = RandomSide_Up();
                randY = Random.Range(minUpOffset, maxUpOffset);
            }
            else
            {
                randX = RandomSide_Side();
                randY = Random.Range(0f, 1f);
            }
        }
        else if(spawnType == SpawnType.UP)
        {
            randX = RandomSide_Up();
            randY = Random.Range(minUpOffset, maxUpOffset);
        }
        else if (spawnType == SpawnType.SIDE)
        {
            randX = RandomSide_Side();
            randY = Random.Range(0f, 1f);
            // print(name + " : " + randX);
        }

        randY = fixedY == true ? fixedUpOffset : randY;
         // randY = fixedY == true ? fixedUpOffset : Random.Range(minUpOffset, maxUpOffset);

        pos.x = randX;
        pos.y = randY;

        pos = Camera.main.ViewportToWorldPoint(pos);
        transform.position = pos;

        OnSpawn.Invoke();
    }

}
