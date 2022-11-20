using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(Theme))]
public class ThemeInspector : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        Theme theme = (Theme)target;

        if(GUILayout.Button("Height Update"))
        {
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

            SaveData(theme);
        }

        if (GUILayout.Button("Save"))
        {
            SaveData(theme);
        }
    }

    void SaveData(Theme data)
    {
        EditorUtility.SetDirty(data);
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
    }

    void HeightUpdate(SpawnData data, Theme theme)
    {
        float percent = data.spawnHeightPercent;
        data.spawnHeight = theme.StartHeight + ((theme.range * 0.01f) * percent);

        if(data.spawnHeightPercent >= data.limitHeightPercent)
        {
            data.limitHeight = data.spawnHeight;
            data.limitHeightPercent = data.spawnHeightPercent;
        }
        else
        {
            percent = data.limitHeightPercent;
            data.limitHeight = theme.StartHeight + ((theme.range * 0.01f) * percent);
        }
    }
}
