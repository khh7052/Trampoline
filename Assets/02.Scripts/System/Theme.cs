using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="Create Theme", fileName = "New Theme")]
public class Theme : ScriptableObject
{
    public string _name;
    public Color backgroundColor; // ���
    public int range = 500; // ����
    public AudioClip bgm;
}
