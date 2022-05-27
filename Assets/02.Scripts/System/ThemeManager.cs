using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class Theme
{
    public string name;
    public Color backgroundColor; // 배경
    public int range = 200; // 범위
    public AudioClip bgm;
}

public class ThemeManager : MonoBehaviour
{
    Camera cam;
    public List<Theme> data = new();
    int index;
    int min, max;
    float height;

    public int Index
    {
        get { return index; }
        set
        {
            if (value < 0 || value >= data.Count) return;

            index = value;

            min = max = 0;

            for (int i = 0; i <= index; i++)
            {
                max += data[i].range;
            }

            min = max - data[index].range;
        }
    }

    private void Awake()
    {
        GameManager.OnGameStart.AddListener(Init);
    }

    private void Start()
    {
        cam = Camera.main;
        max = data[index].range;
    }

    private void Update()
    {
        // 2 <= 0 + 1
        if (data.Count <= index + 1) return;

        height = Ball.Instance.Height;

        IndexUpdate();
        BackgroundUpdate();
    }

    void Init()
    {
        Index = 0;
    }

    void IndexUpdate()
    {
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

}
