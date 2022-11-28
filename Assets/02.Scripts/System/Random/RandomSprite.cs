using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSprite : MonoBehaviour
{
    public List<Sprite> sprites;
    [SerializeField] private SpriteRenderer spriteRenderer;

    public void RandomSet()
    {
        int rand = Random.Range(0,sprites.Count);
        spriteRenderer.sprite = sprites[rand];
    }

}
