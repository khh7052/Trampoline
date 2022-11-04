using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(Theme))]
public class SpawnHeightUpdateButton : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        Theme theme = (Theme)target;

        if(GUILayout.Button("SpawnHeight Update"))
        {
            float height = 0;

            foreach (Theme t in theme.themeManagerData.themes)
            {

                if (theme.name == t.name)
                {
                    break;
                }
                else
                {
                    height += t.range;
                }
            }

            foreach (SpawnData data in theme.obstacles)
            {
                float percent = data.spawnHeightPercent;

                data.spawnHeight = height + ((theme.range * 0.01f) * percent);
            }

            foreach (SpawnData data in theme.enemies)
            {
                float percent = data.spawnHeightPercent;

                data.spawnHeight = height + ((theme.range * 0.01f) * percent);
            }

            foreach (SpawnData data in theme.items)
            {
                float percent = data.spawnHeightPercent;

                data.spawnHeight = height + ((theme.range * 0.01f) * percent);
            }
        }
    }
}
