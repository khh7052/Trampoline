using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(ThemeManagerData))]
public class ThemeManagerDataInspector : Editor
{

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        ThemeManagerData tmData = (ThemeManagerData)target;

        if (GUILayout.Button("Height Update"))
        {
            tmData.HeightUpdate();
            SaveData(tmData);
        }

        if (GUILayout.Button("SpawnData Update"))
        {
            SpawnDataUpdate(tmData);
            SaveData(tmData);
        }

        if (GUILayout.Button("Save"))
        {
            SaveData(tmData);
        }
    }

    void SaveData(ThemeManagerData data)
    {
        EditorUtility.SetDirty(data);
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
    }

    public void SpawnDataUpdate(ThemeManagerData tm)
    {
        for (int i = 0; i < tm.themes.Count; i++)
        {
            Theme theme = tm.themes[i];

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
