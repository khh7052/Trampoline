using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThemeObject : InitObject
{
    public Theme myTheme;
    bool isMyTheme;

    public override void OneInit()
    {
        base.OneInit();
        GameManager.OnGameStart.AddListener(ThemeCheck);
        ThemeManager.OnThemeUpdate.AddListener(ThemeCheck);
    }


    void ThemeCheck()
    {
        isMyTheme = ThemeManager.Instance.Theme == myTheme;
    }

    private void OnBecameInvisible()
    {
        if(!isMyTheme)
        {
            gameObject.SetActive(false);
        }
    }

}
