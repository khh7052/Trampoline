using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(ThemeManagerData))]
public class ThemeManagerDataInspector : Editor
{
    ThemeManagerData data;

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        data = (ThemeManagerData)target;

        if (GUILayout.Button("Height Update"))
        {
            data.HeightUpdate();
        }

        if (GUILayout.Button("SpawnData Update"))
        {
            SpawnDataUpdate();
        }
    }

    public void SpawnDataUpdate()
    {
        for (int i = 0; i < data.themes.Count; i++)
        {
            Theme theme = data.themes[i];

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
        data.spawnHeight = theme.StartHeight + ((theme.range * 0.01f) * percent);

        percent = data.limitHeightPercent;
        data.limitHeight = theme.StartHeight + ((theme.range * 0.01f) * percent);
    }

}
