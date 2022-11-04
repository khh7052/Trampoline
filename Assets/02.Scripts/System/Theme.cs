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
    public AudioClip bgm;

    public List<SpawnData> obstacles;
    public List<SpawnData> enemies;
    public List<SpawnData> items;
}
