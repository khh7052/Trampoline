using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="Create ObjectData", fileName ="New ObjectData")]
public class ObjectData : ScriptableObject
{
    public List<Color> colors = new List<Color>();

}
