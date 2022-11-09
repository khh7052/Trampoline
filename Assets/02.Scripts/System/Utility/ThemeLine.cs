using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThemeLine : BaseInit
{
    public override void OneInit()
    {
        base.OneInit();

        ThemeManager.OnThemeUpdate.AddListener(PositionUpdate);
    }

    public void PositionUpdate()
    {
        Theme theme = ThemeManager.Instance.Theme;
    }
}
