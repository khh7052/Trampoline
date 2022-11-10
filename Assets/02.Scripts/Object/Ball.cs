using System.Collections;
using UnityEngine;

public class Ball : BaseInit
{
    public static Ball Instance;
    public Rigidbody2D rigd;

    [Header("����")]
    public AudioClip dieSound;
    public AudioClip bounceSound;
    [Space]
    [Header("�ִ� �ӵ�")]
    public float maxForce = 100f;
    [Header("����")]
    public bool invincibility = false; // ����

    private CircleCollider2D circleCollider;

    int myLayer;
    int jumpLayer;
    LayerMask obstacleLayerMask;

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

    private void OnDrawGizmos()
    {
        if(circleCollider != null)
            Gizmos.DrawWireSphere(transform.position, Radius);
    }


    public override void OneInit()
    {
        base.OneInit();
        rigd = GetComponent<Rigidbody2D>();
        Instance = this;

        myLayer = gameObject.layer;
        jumpLayer = LayerMask.NameToLayer("Jumping");
        obstacleLayerMask = LayerMask.GetMask("Obstacle");

        circleCollider = GetComponent<CircleCollider2D>();
    }



    public void Die()
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
            // ���ǰ� �浹���̸� ���̾� �ȹٲ�
            if (Physics2D.OverlapCircle(transform.position, Radius, obstacleLayerMask)) return;

            gameObject.layer = myLayer;
        }
    }

    private void OnBecameInvisible() // ȭ������� ������ ���
    {
        if (GameManager.Instance.state != GameState.PLAY) return;

        Die();
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


    private void OnCollisionEnter2D(Collision2D collision)
    {
        SoundManager.Instance.PlaySFX(bounceSound);

        Spin();
        ForceLimit();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Damage"))
        {
            Die();
        }

        Spin();
        ForceLimit();
    }

}
