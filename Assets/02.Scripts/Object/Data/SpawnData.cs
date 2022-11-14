using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SpawnData
{
    public GameObject spawnObject;
    [Range(0, 100)] public float spawnHeightPercent;
    public float spawnHeight;
    [Range(0, 100)] public float limitHeightPercent = 100;
    public float limitHeight;

}
