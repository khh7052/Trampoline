using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SoundManager : MonoBehaviour
{
    public static SoundManager Instance;

    [Header("»ç¿îµå")]
    public AudioSource bgmSpeaker;
    public AudioSource sfxSpeaker;
    public AudioMixer bgm;

    [Header("UI")]
    public Slider bgmSlider;
    public Slider sfxSlider;
    public Image bgmSliderHandle;
    public Image sfxSliderHandle;
    public Sprite onHandle;
    public Sprite offHandle;

    Coroutine bgmCoroutine;
    bool isFading;

    public float BgmVolume
    {
        set
        {
            bgmSpeaker.volume = value;
            bgmSlider.value = value;
            bgmSliderHandle.sprite = value > 0 ? onHandle : offHandle;
        }
    }

    public float SfxVolume
    {
        set
        {
            sfxSpeaker.volume = value;
            sfxSlider.value = value;
            sfxSliderHandle.sprite = value > 0 ? onHandle : offHandle;
        }
    }


    private void Awake()
    {
        Instance = this;

        BgmVolume = bgmSpeaker.volume;
        SfxVolume = sfxSpeaker.volume;
    }

    public void OnBgmVolumeSlider()
    {
        BgmVolume = bgmSlider.value;
    }

    public void OnSfxVolumeSlider()
    {
        SfxVolume = sfxSlider.value;
    }

    public void PlayBGM(AudioClip clip)
    {
        if (clip == null || clip == bgmSpeaker.clip) return;

        if (isFading) StopCoroutine(bgmCoroutine);
        bgmCoroutine = StartCoroutine(BgmFade(clip, 2f));
    }

    public void PlaySFX(AudioClip clip)
    {
        if (clip == null) return;

        sfxSpeaker.PlayOneShot(clip);
    }

    public void PlaySFX(List<AudioClip> clips)
    {
        if (clips == null) return;
        if(clips.Count == 0) return;

        int idx;
        if(clips.Count == 1) idx = 0;
        else idx = Random.Range(0, clips.Count);

        sfxSpeaker.PlayOneShot(clips[idx]);
    }

    void StopBgmFade()
    {
        isFading = false;
        StopCoroutine(bgmCoroutine);
        bgm.SetFloat("bgmVolume", 1);
    }

    public IEnumerator BgmFade(AudioClip nextClip, float duration)
    {
        isFading = true;

        float currentTime = 0;
        float currentVolume;
        float targetVolume = 0;

        bgm.GetFloat("bgmVolume", out currentVolume);
        currentVolume = Mathf.Pow(10, currentVolume / 20);

        while (currentTime < duration)
        {
            currentTime += Time.deltaTime;
            float newVol = Mathf.Lerp(currentVolume, targetVolume, currentTime / duration);
            bgm.SetFloat("bgmVolume", Mathf.Log10(newVol) * 20);
            yield return null;
        }

        currentTime = 0;
        currentVolume = 0;
        targetVolume = 1;

        bgmSpeaker.clip = nextClip;
        bgmSpeaker.Play();

        while (currentTime < duration)
        {
            currentTime += Time.deltaTime;
            float newVol = Mathf.Lerp(currentVolume, targetVolume, currentTime / duration);
            bgm.SetFloat("bgmVolume", Mathf.Log10(newVol) * 20);
            yield return null;
        }

        isFading=false;

        yield break;
    }
}
