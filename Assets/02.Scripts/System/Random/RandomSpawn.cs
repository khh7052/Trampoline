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
    public float spawnDistance = 100f;
    public float removeDistance = 100f;
    public float limitHeight = 50f;
    public float spawnDealy = 1f;
    public bool isSpowning;
    public bool onRemove = false;

    private void Start()
    {
        NoDealySpawn();
    }

    private void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;

        if (onRemove == false)
        {
            if (limitHeight <= transform.position.y) onRemove = true; // 고도제한

            if (Mathf.Abs(Ball.Instance.Height - transform.position.y) >= spawnDistance) // 멀어지면 리스폰
                if (isSpowning == false) Spawn();
        }
        else
        {
            if (Mathf.Abs(Ball.Instance.Height - transform.position.y) >= removeDistance) // 멀어지면 삭제
                if (onRemove) Destroy(gameObject);
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
        if (onRemove) return;
        isSpowning = true;
        Invoke("DealySpawn", spawnDealy);
    }

    public void NoDealySpawn()
    {
        if (onRemove) return;
        float randX = 0;
        float randY = 0;

        if (spawnType == SpawnType.ALL)
        {
            int type = Random.Range(0, 2);

            if (type == 0)
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
        else if (spawnType == SpawnType.UP)
        {
            randX = RandomSide_Up();
            randY = Random.Range(minUpOffset, maxUpOffset);
        }
        else if (spawnType == SpawnType.SIDE)
        {
            randX = RandomSide_Side();
            randY = Random.Range(0f, 1f);
        }

        randY = fixedY == true ? fixedUpOffset : randY;

        pos.x = randX;
        pos.y = randY;

        pos = Camera.main.ViewportToWorldPoint(pos);
        transform.position = pos;

        OnSpawn.Invoke();
    }

    public void DealySpawn()
    {
        if (onRemove) return;
        if (GameManager.Instance.state != GameState.PLAY)
        {
            isSpowning = false;
            return;
        }

        gameObject.SetActive(true);
        NoDealySpawn();
        isSpowning = false;
    }


}
