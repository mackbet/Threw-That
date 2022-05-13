using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class trajectory : MonoBehaviour
{
    public GameObject simulatingPrefab;
    public GameObject ballContainer;
    public GameObject holeContainer;
    private Dictionary<Rigidbody, BodyData> savedBodies = new Dictionary<Rigidbody, BodyData>();

    int maxIterations = 500;
    void Start()
    {
    }
    public void AddBody(Rigidbody rb)
    {
        savedBodies.Add(rb, new BodyData());
    }
    void Update()
    {
    }
    public bool showTrajectory(Vector3 force, Vector3 startPosition)
    {
        savedBodies = new Dictionary<Rigidbody, BodyData>();
        foreach (var rb in FindObjectsOfType<Rigidbody>())
        {
            savedBodies.Add(rb, new BodyData());
        }
        foreach (var body in savedBodies)
        {
            body.Value.position = body.Key.transform.position;
            body.Value.rotation = body.Key.transform.rotation;
            body.Value.velocity = body.Key.velocity;
            body.Value.angularVelocity = body.Key.angularVelocity;
        }

        GameObject pref = Instantiate(simulatingPrefab,startPosition,Quaternion.identity);
        pref.transform.position = startPosition;
        pref.GetComponent<Rigidbody>().AddForce(force);

        Physics.autoSimulation = false;


        for (int i = 0; i < maxIterations; i++)
        {
            if (pref.GetComponent<simulationCollisions>().collisionChecker == true)
            {
                Destroy(pref);
                Physics.autoSimulation = true;
                foreach (var body in savedBodies)
                {
                    body.Key.transform.position = body.Value.position;
                    body.Key.transform.rotation = body.Value.rotation;
                    body.Key.velocity = body.Value.velocity;
                    body.Key.angularVelocity = body.Value.angularVelocity;
                }
                return true;
            }
            Physics.Simulate(Time.fixedDeltaTime);
        }
        Destroy(pref);
        Physics.autoSimulation = true;
        foreach (var body in savedBodies)
        {
            body.Key.transform.position = body.Value.position;
            body.Key.transform.rotation = body.Value.rotation;
            body.Key.velocity = body.Value.velocity;
            body.Key.angularVelocity = body.Value.angularVelocity;
        }
        return holeContainer.transform.GetChild(0).transform.GetChild(1).GetComponent<point>().hit;
    }
    public class BodyData
    {
        public Vector3 position;
        public Quaternion rotation;
        public Vector3 velocity;
        public Vector3 angularVelocity;
    }
}
