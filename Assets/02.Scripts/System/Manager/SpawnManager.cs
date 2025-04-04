using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : BaseInit
{
    // 테마가 변경될 때마다 장애물, 적, 아이템을 스폰 or 활성화
    // 이전 테마의 장애물, 적, 아이템은 스폰하지않도록 조치
    private ThemeManager tm;
    Coroutine heightCheck;
    readonly WaitForSeconds waitSeconds = new(0.1f);
    private List<RandomSpawn> spawnedObjects = new();
    private List<SpawnData> spawnDatas = new();
    private int lastThemeIndex = -1;

    private void Start()
    {
        tm = ThemeManager.Instance;
    }

    public override void OneInit()
    {
        base.OneInit();
        GameManager.OnGameOver.AddListener(StopCheck);
        ThemeManager.OnThemeUpdate.AddListener(SpawnedObjectUpdate);
        ThemeManager.OnThemeUpdate.AddListener(SpawnDataUpdate);
    }

    public override void Init()
    {
        if(GameManager.Instance.state == GameState.LOBBY)
        {
            SpawnedObjectClear();
            SpawnDataClear();
        }
        else
        {
            IndexInit();
            SpawnedObjectClear();
            SpawnDataClear();
            SpawnDataUpdate();
            StartCheck();
        }
    }

    public void IndexInit()
    {
        lastThemeIndex = -1;
    }

    public void StopCheck()
    {
        if (heightCheck != null)
        {
            StopCoroutine(heightCheck);
        }
    }
    public void StartCheck()
    {
        heightCheck = StartCoroutine(HeightCheck());
    }
    IEnumerator HeightCheck()
    {
        yield return waitSeconds;

        while (true)
        {
            for (int i = spawnDatas.Count-1; i >= 0; i--)
            {
                var data = spawnDatas[i];

                if (GameManager.MainBall.transform.position.y >= data.spawnHeight)
                {
                    Spawn(data);
                }
            }

            yield return waitSeconds;
        }
    }
    public void SpawnedObjectUpdate()
    {
        if (tm.Index <= lastThemeIndex) return;

        for(int i = spawnedObjects.Count - 1; i >= 0; i--)
        {
            spawnedObjects[i].onRemove = true;
        }
    }

    public void SpawnedObjectClear()
    {
        for (int i = spawnedObjects.Count - 1; i >= 0; i--)
        {
            if(spawnedObjects[i] != null) Destroy(spawnedObjects[i].gameObject);
        }

        spawnedObjects.Clear();
    }

    public void SpawnDataUpdate()
    {
        if (tm.Index <= lastThemeIndex) return;
        spawnDatas.AddRange(tm.Theme.obstacles);
        spawnDatas.AddRange(tm.Theme.enemies);
        spawnDatas.AddRange(tm.Theme.items);

        lastThemeIndex = tm.Index;
    }
    public void SpawnDataClear()
    {
        spawnDatas.Clear();
    }

    public void Spawn(SpawnData data)
    {
        Vector2 spawnPos = Vector2.zero;
        spawnPos.y = -1000;
        RandomSpawn spawned = Instantiate(data.spawnObject, spawnPos, Quaternion.identity).GetComponent<RandomSpawn>();
        spawned.gameObject.name = tm.Theme.name + "_" + data.spawnObject.name;
        spawned.limitHeight = data.limitHeight;
        
        spawnedObjects.Add(spawned);
        spawnDatas.Remove(data);
    }
}
