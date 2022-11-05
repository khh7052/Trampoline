using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))]
public class RandomVelocity : MonoBehaviour
{
    Rigidbody2D rigd;
    public bool forceOn = true;
    public bool rotOn = false;

    public float minSpeed = 0f;
    public float maxSpeed = 1f;

    public float minRot = 0f;
    public float maxRot = 5f;

    private void Awake()
    {
        rigd = GetComponent<Rigidbody2D>();
    }

    public void RandomSet()
    {
        float x, y, rot;

        rigd.velocity = Vector3.zero;
        rigd.angularVelocity = 0;

        if (forceOn)
        {
            Vector2 velocity = Vector2.one;
            x = Random.Range(minSpeed, maxSpeed);
            y = Random.Range(minSpeed, maxSpeed);

            velocity.x = x;
            velocity.y = y;

            rigd.velocity = velocity;
        }

        if (rotOn)
        {
            rot = Random.Range(minRot, maxRot);
            rigd.angularVelocity = rot;
        }
        
    }
}
