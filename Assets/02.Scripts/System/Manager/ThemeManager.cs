using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ThemeManager : BaseInit
{
    // 공 위치에 따라서 배경색깔, 배경음, 현재 테마 정보 변경

    public static UnityEvent OnThemeUpdate = new();
    public static ThemeManager Instance;
    public ThemeManagerData t_data;

    Camera cam;
    public List<Theme> data = new();
    int index;

    public Theme Theme
    {
        get { return data[index]; }
    }

    public int Index
    {
        get { return index; }
        set
        {
            if (value < 0 || value >= data.Count) return;
            if (index == value) return;

            index = value;

            ThemeUpdate();
            SoundManager.Instance.PlayBGM(data[index].bgm);
        }
    }

    private void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;
        if (data.Count <= index + 1) return;

        IndexUpdate();
        BackgroundUpdate();
    }

    public override void OneInit()
    {
        base.OneInit();
        Instance = this;
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
        if (data.Count <= index + 1) return;
        cam.backgroundColor = Color.Lerp(data[index].backgroundColor, data[index + 1].backgroundColor, (float)(GameManager.BallHeight - Theme.StartHeight) / Theme.range);
    }

    public void ThemeUpdate()
    {
        OnThemeUpdate.Invoke();
    }

}
