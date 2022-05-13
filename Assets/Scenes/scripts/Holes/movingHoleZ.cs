using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = System.Random;
public class movingHoleZ : MonoBehaviour
{
    public Vector3 direction = new Vector3(0, 0, 0);
    Random rand = new Random();
    public float speed = 10f;
    public float dif;
    void Start()
    {
    }

    void Update()
    {
        if (direction.z == 0)
        {
            if (rand.Next(0, 2) == 0)
            {
                direction = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, gameObject.transform.position.z - 3f);
                dif = -3f;
            }
            else
            {
                direction = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, gameObject.transform.position.z + 3f);
                dif = 3f;
            }
        }

        if (gameObject.transform.position == direction)
        {
            if (dif == 3f)
            {
                direction.z = direction.z - 6f;
                dif = -3f;
            }
            else if (dif == -3)
            {
                direction.z = direction.z + 6f;
                dif = 3f;
            }
        }
        gameObject.transform.position = Vector3.MoveTowards(gameObject.transform.position, direction, speed * Time.deltaTime);
    }
}
