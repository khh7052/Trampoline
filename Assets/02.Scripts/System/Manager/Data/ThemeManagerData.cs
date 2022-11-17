using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Create ThemeManagerData", fileName = "New ThemeManagerData")]
public class ThemeManagerData : ScriptableObject
{
    public List<Theme> themes;


    public void HeightUpdate()
    {
        int height = 0;
        for (int i = 0; i < themes.Count; i++)
        {
            themes[i].StartHeight = height;
            height += themes[i].range;
            themes[i].EndHeight = height;
            Debug.Log(themes[i].name + "ÀÇ StartHeight : " + themes[i].StartHeight);
        }

        Debug.Log("StartHeight Update Complete");
    }
}
