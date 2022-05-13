using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;
public class movingHoleX : MonoBehaviour
{
    public Vector3 direction = new Vector3(0, 0, 0);
    Random rand = new Random();
    public float speed = 10f;
    void Start()
    {
    }

    void Update()
    {
        if (direction.x == 0)
        {
            if (rand.Next(0, 2) == 0)
            {
                direction = new Vector3(-3, gameObject.transform.position.y, gameObject.transform.position.z);
            }
            else
            {
                direction = new Vector3(3, gameObject.transform.position.y, gameObject.transform.position.z);
            }
        }

        if (gameObject.transform.position == direction)
        {
            if (direction.x == 3)
            {
                direction.x = -3;
            }
            else if (direction.x == -3)
            {
                direction.x = 3;
            }
        }
        gameObject.transform.position = Vector3.MoveTowards(gameObject.transform.position, direction, speed * Time.deltaTime);
    }
}
