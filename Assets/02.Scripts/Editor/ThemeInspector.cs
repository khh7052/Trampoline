using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(Theme))]
public class ThemeInspector : Editor
{
    Theme theme;
    float height = 0;
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        theme = (Theme)target;

        if(GUILayout.Button("Height Update"))
        {
            height = theme.themeManagerData.GetStartHeight(theme);

            foreach (SpawnData data in theme.obstacles)
            {
                HeightUpdate(data, theme);
            }

            foreach (SpawnData data in theme.enemies)
            {
                HeightUpdate(data, theme);
            }

            foreach (SpawnData data in theme.items)
            {
                HeightUpdate(data, theme);
            }
        }
    }

    void HeightUpdate(SpawnData data, Theme theme)
    {
        float percent = data.spawnHeightPercent;
        data.spawnHeight = height + ((theme.range * 0.01f) * percent);

        if(data.spawnHeightPercent >= data.limitHeightPercent)
        {
            data.limitHeight = data.spawnHeight;
            data.limitHeightPercent = data.spawnHeightPercent;
        }
        else
        {
            percent = data.limitHeightPercent;
            data.limitHeight = height + ((theme.range * 0.01f) * percent);
        }
    }
}
