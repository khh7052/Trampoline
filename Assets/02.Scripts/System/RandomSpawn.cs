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
    public bool randomDir; // ¹æÇâ ·£´ý
    public float minRot = -45;
    public float maxRot = 45;

    public bool randomScale; // Å©±â ·£´ý
    public float minScaleX = 0.1f;
    public float maxScaleX = 1;
    public float minScaleY = 0.1f;
    public float maxScaleY = 1;

    public SpawnType spawnType;
    public float spawnDistance = 20f;

    private void Awake()
    {
        GameManager.OnGameStart.AddListener(RandomDir);
        RandomDir();
    }

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
            }
            else
            {
                randX = RandomSide_Side();
            }
        }
        else if(spawnType == SpawnType.UP)
        {
            randX = RandomSide_Up();
        }
        else if (spawnType == SpawnType.SIDE)
        {
            randX = RandomSide_Side();

            // print(name + " : " + randX);
        }

        randY = fixedY == true ? maxUpOffset : Random.Range(minUpOffset, maxUpOffset);

        pos.x = randX;
        pos.y = randY;

        pos = Camera.main.ViewportToWorldPoint(pos);
        transform.position = pos;

        RandomDir();
        RandomScale();

        OnSpawn.Invoke();
    }


    void RandomDir()
    {
        if (randomDir)
        {
            float rot = Random.Range(minRot, maxRot);
            transform.rotation = Quaternion.Euler(0, 0, rot);
        }
    }

    void RandomScale()
    {
        if (randomScale)
        {
            Vector2 scale = transform.localScale;

            scale.x = Random.Range(minScaleX, maxScaleX);
            scale.y = Random.Range(minScaleY, maxScaleY);

            transform.localScale = scale;
        }
    }

}
