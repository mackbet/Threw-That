using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class simulationCollisions : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public bool collisionChecker=false;
    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "point")
            collisionChecker = true;
        else
            collisionChecker = false;
    }
}
