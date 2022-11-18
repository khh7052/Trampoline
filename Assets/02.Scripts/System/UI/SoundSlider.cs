using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum SoundType
{
    BGM,
    SFX
}
public class SoundSlider : BaseInit
{
    private SoundManager soundManager;
    public SoundType type = SoundType.BGM;
    public Slider slider;
    public Image handle;
    public Sprite onHandle;
    public Sprite offHandle;

    public override void Init()
    {
        soundManager = SoundManager.Instance;
        if (soundManager == null) return;

        slider.value = type == SoundType.BGM ? soundManager.BgmVolume : soundManager.SfxVolume;
        if(type == SoundType.BGM) soundManager.PerivousVolume_Bgm = slider.value;
        else soundManager.PerivousVolume_Sfx = slider.value;
    }

    public void OnChangeValue()
    {
        handle.sprite = slider.value > 0 ? onHandle : offHandle;

        if(type == SoundType.BGM)
        {
            soundManager.BgmVolume = slider.value;
        }
        else
        {
            soundManager.SfxVolume = slider.value;
        }
    }


}
