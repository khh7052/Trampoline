using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    // �׸��� ����� ������ ��ֹ�, ��, �������� ���� or Ȱ��ȭ
    // ���� �׸��� ��ֹ�, ��, �������� ���������ʵ��� ��ġ

    Coroutine heightCheck;
    readonly WaitForSeconds waitSeconds = new WaitForSeconds(0.1f);

    List<GameObject> spawnedObjects = new List<GameObject>();
    List<SpawnData> spawnDatas = new List<SpawnData>();

    public void Awake()
    {
        OneInit();
    }

    void OneInit()
    {
        GameManager.OnGameStart.AddListener(Init);
        ThemeManager.OnThemeUpdate.AddListener(SpawnedObjectDate);
        ThemeManager.OnThemeUpdate.AddListener(SpawnDataUpdate);
    }

    public void Init()
    {
        if(heightCheck != null)
        {
            StopCoroutine(heightCheck);
        }

        SpawnedObjectDate();
        SpawnDataUpdate();

        heightCheck =  StartCoroutine(HeightCheck());
    }

    IEnumerator HeightCheck()
    {
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

    public void SpawnedObjectDate()
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
