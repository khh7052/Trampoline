using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="Create Theme", fileName = "New Theme")]
public class Theme : ScriptableObject
{
    public ThemeManagerData themeManagerData;
    public string _name;
    public Color backgroundColor; // 배경
    public int range = 500; // 범위
    [SerializeField]
    private int startHeight = 0;
    [SerializeField]
    private int endHeight = 0;

    public int StartHeight
    {
        get { return startHeight; }
        set { startHeight = value; }
    }

    public int EndHeight
    {
        get { return endHeight; }
        set { endHeight = value; }
    }

    public AudioClip bgm;

    public List<SpawnData> obstacles;
    public List<SpawnData> enemies;
    public List<SpawnData> items;
}
