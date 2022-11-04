using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;


public class ThemeManager : MonoBehaviour
{
    // 공 위치에 따라서 배경색깔, 배경음, 현재 테마 정보 변경

    public static UnityEvent OnThemeUpdate = new();
    public static ThemeManager Instance;

    Camera cam;
    public List<Theme> data = new();
    int index;
    int min, max;
    float height;


    public float Height
    {
        get
        {
            return Ball.Instance.Height - min;
        }
    }

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

            min = max = 0;

            for (int i = 0; i <= index; i++)
            {
                max += data[i].range;
            }

            min = max - data[index].range;


            ThemeUpdate();
            SoundManager.Instance.PlayBGM(data[index].bgm);
        }
    }

    private void Awake()
    {
        OneInit();
    }


    private void Update()
    {
        if (GameManager.Instance.state != GameState.PLAY) return;
        if (data.Count <= index + 1) return;

        IndexUpdate();
        BackgroundUpdate();
    }

    void OneInit()
    {
        Instance = this;
        cam = Camera.main;
        max = data[index].range;

        GameManager.OnGameStart.AddListener(Init);
    }

    public void Init()
    {
        Index = 0;
    }

    void IndexUpdate()
    {
        height = Ball.Instance.Height;

        if (height >= max)
        {
            Index++;
        }
        else if (height < min)
        {
            Index--;
        }
    }

    void BackgroundUpdate()
    {
        if (data.Count <= index + 1) return;

        cam.backgroundColor = Color.Lerp(data[index].backgroundColor, data[index + 1].backgroundColor, (height - min) / data[index].range);
    }

    public void ThemeUpdate()
    {
        OnThemeUpdate.Invoke();
    }

}
