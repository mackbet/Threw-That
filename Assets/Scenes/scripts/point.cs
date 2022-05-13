using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class point : MonoBehaviour
{
    public bool hit=false;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerStay(Collider other)
    {
        hit = true;
    }
    private void OnTriggerEnter(Collider other)
    {
        hit = true;
    }
    private void OnTriggerExit(Collider other)
    {
        hit = true;
    }
}
