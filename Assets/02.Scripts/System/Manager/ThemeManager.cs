using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ThemeManager : BaseInit
{
    // 공 위치에 따라서 배경색깔, 배경음, 현재 테마 정보 변경
    public static UnityEvent OnThemeUpdate = new();
    private static ThemeManager instance;
    [SerializeField] private ThemeManagerData data;

    public static ThemeManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = FindObjectOfType<ThemeManager>();
            }

            return instance;
        }
    }

    private Camera cam;
    private int index;

    public List<Theme> Themes
    {
        get { return data.themes; }
    }

    public Theme Theme
    {
        get { return Themes[index]; }
    }

    public int Index
    {
        get { return index; }
        set
        {
            if (value < 0 || value >= Themes.Count) return;
            if (index == value) return;

            index = value;

            ThemeUpdate();
            BackgroundUpdate();
            SoundManager.Instance.PlayBGM(Theme.bgm);
            print(Theme.name);
        }
    }

    private void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;
        if (Themes.Count <= index + 1) return;

        IndexUpdate();
        BackgroundUpdate();
    }

    public override void OneInit()
    {
        base.OneInit();
        instance = this;
        cam = Camera.main;
    }

    public override void Init()
    {
        Index = 0;
    }

    void IndexUpdate()
    {
        if (GameManager.BallHeight >= Theme.EndHeight)
        {
            Index++;
        }
        else if (GameManager.BallHeight < Theme.StartHeight)
        {
            Index--;
        }
    }

    void BackgroundUpdate()
    {
        if (Themes.Count <= index + 1) return;
        cam.backgroundColor = Color.Lerp(Themes[index].backgroundColor, Themes[index + 1].backgroundColor, (float)(GameManager.BallHeight - Theme.StartHeight) / Theme.range);
    }

    public void ThemeUpdate()
    {
        OnThemeUpdate.Invoke();
    }

}
