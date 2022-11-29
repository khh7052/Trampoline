using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShadowEffect : MonoBehaviour
{
    public Transform target;
    public float range = 10f;
    public LayerMask checkMask;
    private Vector2 originScale;
    private RaycastHit2D hit;
    private SpriteRenderer spriteRenderer;

    private void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        originScale = transform.localScale;
    }
    
    void Update()
    {
        if (target == null) return;
        hit = Physics2D.Raycast(target.position, Vector2.down, range, checkMask);

        if (hit)
        {
            
            spriteRenderer.enabled = true;
            transform.position = hit.point;
            transform.localScale = originScale * Mathf.Lerp(1, 0.01f, (hit.distance / range));
        }
        else
        {
            spriteRenderer.enabled = false;
        }
    }
}
