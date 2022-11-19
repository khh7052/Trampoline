using System.Collections;
using UnityEngine;

public class Ball : DamageableObject
{
    public Rigidbody2D rigd;

    [Header("사운드")]
    public AudioClip bounceSound;
    [Space]
    [Header("최대 속도")]
    public float maxForce = 100f;
    [Header("튕김")]
    public float bounciness = 1.5f;
    [Header("무적")]
    public bool invincibility = false; // 무적

    private SpriteRenderer spriteRenderer;
    private CircleCollider2D circleCollider;
    private PhysicsMaterial2D physicMaterial;
    public Color paintingColor;

    int myLayer;
    int jumpLayer;
    LayerMask obstacleLayerMask;

    private bool isPainting = false;

    public bool IsPainting
    {
        get { return isPainting; }
        set
        {
            isPainting = value;
            invincibility = value;

            if (invincibility)
            {
                spriteRenderer.color = paintingColor;
            }
            else
            {
                spriteRenderer.color = Color.white;
            }
        }
    }

    public bool IsTrigger
    {
        set
        {
            circleCollider.isTrigger = value;
        }
    }

    public float Radius
    {
        get { return circleCollider.radius * Scale; }
    }

    public float Width
    {
        get { return transform.position.x; }
    }

    public float Height
    {
        get { return transform.position.y; }
    }

    public float Scale
    {
        get { return transform.localScale.x; }
    }

    public float Bounciness
    {
        get { return bounciness; }
        set
        {
            bounciness = value;
            physicMaterial.bounciness = bounciness;
        }
    }

    public override void OneInit()
    {
        base.OneInit();
        rigd = GetComponent<Rigidbody2D>();

        myLayer = gameObject.layer;
        jumpLayer = LayerMask.NameToLayer("Jumping");
        obstacleLayerMask = LayerMask.GetMask("Obstacle");

        spriteRenderer = GetComponent<SpriteRenderer>();
        circleCollider = GetComponent<CircleCollider2D>();
        physicMaterial = circleCollider.sharedMaterial;
        Bounciness = bounciness;
    }


    public override void Die()
    {
        if (invincibility) return;

        SoundManager.Instance.PlaySFX(dieSound);
        gameObject.SetActive(false);
        GameManager.Instance.GameOver();
    }

    private void Update()
    {
        VelocityCheck();
    }

    void VelocityCheck()
    {
        if (rigd.velocity.y > 0)
        {
            gameObject.layer = jumpLayer;
        }
        else
        {
            // 발판과 충돌중이면 레이어 안바꿈
            if (Physics2D.OverlapCircle(transform.position, Radius, obstacleLayerMask)) return;

            gameObject.layer = myLayer;
        }
    }

    protected override void OnBecameInvisible() // 화면밖으로 나가면 사망
    {
        base.OnBecameInvisible();
        if (GameManager.Instance.state != GameState.PLAY) return;
        if(Height < Camera.main.transform.position.y) Die();
    }

    void Spin()
    {
        int rand = Random.Range(-1, 2);
        if (rand > 0) rand = 1;
        else rand = -1;

        rigd.angularVelocity += rigd.velocity.magnitude * rand;
    }

    void ForceLimit()
    {
        Vector2 velocity = rigd.velocity;

        if(velocity.sqrMagnitude > maxForce * maxForce)
        {
            velocity = Vector2.ClampMagnitude(velocity, maxForce);
        }

        rigd.velocity = velocity;
    }


    public void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Damage"))
        {
            if(IsPainting == true)
            {
                IsPainting = false;
            }
            else
            {
                hp.Damage();
            }
        }

        if (hp.IsDead == false)
        {
            SoundManager.Instance.PlaySFX(bounceSound);
            Spin();
            ForceLimit();
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Damage"))
        {
            if (IsPainting == true)
            {
                IsPainting = false;
            }
            else
            {
                hp.Damage();
            }
        }
    }

}
