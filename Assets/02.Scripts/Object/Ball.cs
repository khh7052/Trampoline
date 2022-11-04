using System.Collections;
using UnityEngine;

public class Ball : InitObject
{
    public static Ball Instance;
    public AudioClip dieSound;
    public AudioClip bounceSound;
    public float maxForce = 100f;
    public bool invincibility = false; // 무적

    float bottomOffset = 0;

    Coroutine heightCoroutine;
    readonly WaitForSeconds heightCheckDelay = new(1f); // 재시작할때 카메라 버그막는용
    readonly WaitForSeconds heightCheckRate = new(0.1f);

    int myLayer;
    int jumpLayer;
    LayerMask obstacleLayerMask;

    public float Width
    {
        get { return transform.position.x; }
    }

    public float Height
    {
        get { return transform.position.y; }
    }

    public override void OneInit()
    {
        base.OneInit();
        Instance = this;

        bottomOffset = CameraManager.Height - CameraManager.GetScreenBottomPos();

        myLayer = gameObject.layer;
        jumpLayer = LayerMask.NameToLayer("Jumping");
        obstacleLayerMask = LayerMask.GetMask("Obstacle");


        GameManager.OnGameStart.AddListener(StartHeightCheck);
        GameManager.OnGameOver.AddListener(StopHeightCheck);
    }

    public override void Init()
    {
        base.Init();
        StartHeightCheck();
    }


    public void Die()
    {
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
            if (Physics2D.OverlapCircle(transform.position, 1f, obstacleLayerMask)) return;

            gameObject.layer = myLayer;
        }
    }

    void StartHeightCheck()
    {
        heightCoroutine = StartCoroutine(HeightCoroutine());
    }

    void StopHeightCheck()
    {
        StopCoroutine(heightCoroutine);
    }

    IEnumerator HeightCoroutine()
    {
        yield return heightCheckDelay;

        while (true)
        {
            if (GameManager.Instance.state != GameState.PLAY) continue;

            if (transform.position.y < CameraManager.Height - bottomOffset)
            {
                Die();
            }

            yield return heightCheckRate;
        }
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
            if (!invincibility) Die();
        }

        Spin();
        ForceLimit();
    }

}
