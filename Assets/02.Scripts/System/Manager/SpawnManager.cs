using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : BaseInit
{
    // �׸��� ����� ������ ��ֹ�, ��, �������� ���� or Ȱ��ȭ
    // ���� �׸��� ��ֹ�, ��, �������� ���������ʵ��� ��ġ

    Coroutine heightCheck;
    readonly WaitForSeconds waitSeconds = new(0.1f);
    private List<GameObject> spawnedObjects = new();
    private List<SpawnData> spawnDatas = new();


    public override void OneInit()
    {
        base.OneInit();
        GameManager.OnGameOver.AddListener(StopCheck);
        ThemeManager.OnThemeUpdate.AddListener(SpawnedObjectUpdate);
        ThemeManager.OnThemeUpdate.AddListener(SpawnDataUpdate);
    }

    public override void Init()
    {
        base.Init();

        SpawnedObjectUpdate();
        SpawnDataUpdate();

        StartCheck();
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

                if (Ball.Instance.Height >= data.spawnHeight)
                {
                    Spawn(data);
                }
            }

            yield return waitSeconds;
        }
    }

    public void SpawnedObjectUpdate()
    {
        foreach (var obj in spawnedObjects)
        {
            Destroy(obj);
        }

        spawnedObjects.Clear();
    }

    public void SpawnDataUpdate()
    {
        spawnDatas.Clear();

        spawnDatas.AddRange(ThemeManager.Instance.Theme.obstacles);
        spawnDatas.AddRange(ThemeManager.Instance.Theme.enemies);
        spawnDatas.AddRange(ThemeManager.Instance.Theme.items);
    }

    public void Spawn(SpawnData data)
    {
        Vector2 spawnPos = Vector2.zero;
        spawnPos.y = -1000;
        GameObject spawned = Instantiate(data.spawnObject, spawnPos, Quaternion.identity);

        spawnedObjects.Add(spawned);
        spawnDatas.Remove(data);
    }
}
