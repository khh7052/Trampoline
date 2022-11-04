using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName = "Create ThemeManagerData", fileName = "New ThemeManagerData")]
public class ThemeManagerData : ScriptableObject
{
    public List<Theme> themes;
}
