using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public enum SpawnType
{
    UP,
    SIDE
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

    public SpawnType spawnType;
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
        float randX = 0;
        float randY = 0;

        if(spawnType == SpawnType.UP)
        {
            randX = Random.Range(-maxSideOffset, 1 + maxSideOffset);
        }
        else if (spawnType == SpawnType.SIDE)
        {
            randX = Random.Range(0, 2);

            if(randX == 0)
            {
                randX = Random.Range(-minSideOffset, -maxSideOffset);
            }
            else
            {
                randX = Random.Range(1 + minSideOffset, 1 + maxSideOffset);
            }

            // print(name + " : " + randX);
        }

        randY = fixedY == true ? maxUpOffset : Random.Range(minUpOffset, maxUpOffset);


        pos.x = randX;
        pos.y = randY;

        pos = Camera.main.ViewportToWorldPoint(pos);
        transform.position = pos;

        OnSpawn.Invoke();
    }


}
