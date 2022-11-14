using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Create ThemeManagerData", fileName = "New ThemeManagerData")]
public class ThemeManagerData : ScriptableObject
{
    public List<Theme> themes;
    public Dictionary<Theme, float> themeStartHeights = new();

    public float GetStartHeight(Theme theme)
    {
        if(themeStartHeights.Count == 0) StartHeightUpdate();

        return themeStartHeights[theme];
    }

    public void StartHeightUpdate()
    {
        if(themeStartHeights != null) themeStartHeights.Clear();

        float height = 0;
        for (int i = 0; i < themes.Count; i++)
        {
            themeStartHeights.Add(themes[i], height);
            height += themes[i].range;
            Debug.Log(themes[i].name + "ÀÇ StartHeight : " + themeStartHeights[themes[i]]);
        }

        Debug.Log("StartHeight Update Complete");
    }
}
