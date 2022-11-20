using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SoundManager : Singleton<SoundManager>
{
    [Header("»ç¿îµå")]
    [SerializeField] private AudioSource bgmSpeaker;
    [SerializeField] private AudioSource sfxSpeaker;
    [SerializeField] private AudioMixer bgm;

    [Header("UI")]
    private float perivousVolume_Bgm = 1;
    private float perivousVolume_Sfx = 1;

    Coroutine bgmCoroutine;
    bool isFading;

    public float PerivousVolume_Bgm
    {
        set { perivousVolume_Bgm = value; }
    }

    public float PerivousVolume_Sfx
    {
        set { perivousVolume_Sfx = value; }
    }

    public float BgmVolume
    {
        get { return bgmSpeaker.volume; }
        set { bgmSpeaker.volume = value; }
    }

    public float SfxVolume
    {
        get { return sfxSpeaker.volume; }
        set { sfxSpeaker.volume = value; }
    }

    private void Awake()
    {
        BgmVolume = bgmSpeaker.volume;
        SfxVolume = sfxSpeaker.volume;
        perivousVolume_Bgm = BgmVolume;
        perivousVolume_Sfx = SfxVolume;
    }

    public void OnApplyBtn()
    {
        perivousVolume_Bgm = BgmVolume;
        perivousVolume_Sfx = SfxVolume;
    }

    public void OnCancelBtn()
    {
        BgmVolume = perivousVolume_Bgm;
        SfxVolume = perivousVolume_Sfx;
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

    private void StopBgmFade()
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
