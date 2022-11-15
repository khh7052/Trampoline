using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(PlayerLine))]
public class PlayerLineInspector : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        
        PlayerLine line = (PlayerLine)target;
        
        if(GUILayout.Button("Init"))
        {
            line.OneInit();
        }

    }
}
