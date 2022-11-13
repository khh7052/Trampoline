using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class SoundManager : MonoBehaviour
{
    public static SoundManager Instance;

    public AudioSource bgmSpeaker;
    public AudioSource sfxSpeaker;
    public AudioMixer bgm;
    Coroutine bgmCoroutine;
    bool isFading;

    private void Awake()
    {
        Instance = this;
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
