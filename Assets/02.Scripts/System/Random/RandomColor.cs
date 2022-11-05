using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomColor : MonoBehaviour
{
    public ObjectData data;
    private SpriteRenderer sprite;

    private void Awake()
    {
        sprite = GetComponent<SpriteRenderer>();
    }

    public void SetColor()
    {
        int rand = Random.Range(0, data.colors.Count);
        sprite.color = data.colors[rand];
    }
}
