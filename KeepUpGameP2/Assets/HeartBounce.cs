using UnityEngine;
using System.Collections;

public class HeartBounce : MonoBehaviour {
	
	public GUIText hitCount;
	private int numHits = 0;
	private bool hasLost = false;
	private int bestScore = 0;
	private int lastBest = 0;
	private bool velocityWasStored = false;
	private Vector3 storedVelocity;

	// Use this for initialization
	void Start () {
	
	}
	
	private void OnCollisionEnter(Collision col)
	{
		if(col.gameObject.tag == "tray")
		{
			Debug.Log("yes! hit tray!");
				if (!velocityWasStored)
				{
					storedVelocity = GetComponent<Rigidbody>().velocity;
					velocityWasStored = true;
				}
				if(GetComponent<Rigidbody>().velocity.y > 1)
				{
					numHits ++;
				}
				
			GetComponent<Rigidbody>().velocity = new Vector3((GetComponent<Rigidbody>().velocity.x, storedVelocity.y, GetComponent<Rigidbody>().velocity.z);
		}
	}
	
	// Update is called once per frame
	void Update () 
	{
		string str = "";
		
		if(!hasLost)
		{
			str = numHits.ToString();
		} else {
			str = "Hits:" + numHits.ToString() + "/nYour best:" + bestScore;
			
			if(bestScore > lastBest) str += "\nNEW RECORD!";
		}
		hitCount.text = str;
		
		if(transform.position.y < -3)
		{
			if(!hasLost)
			{
				hasLost = true;
				lastBest = bestScore;
				if(numHits > bestScore)
				{
					bestScore = numHits;
				}
			}
		}
	}
	
	void OnGUI()
	{
		if(hasLost)
		{
			float buttonW = 100; // button width
			float buttonH = 50; // button height
			
			float halfScreenW = Screen.width/2; // half of the Screen width
			float halfButtonW = buttonW/2; // half of the button width
			
			if (GUI.Button(new Rect(halfScreenW-halfButtonW, Screen.height*.8f, buttonW, buttonH), "Play Again"))
			{
				numHits = 0;
				hasLost = false;
				velocityWasStored = false;
				transform.position = new Vector3(0.5f,2,-0.05f);
				GetComponent<Rigidbody>().velocity = new Vector3(0,0,0);
			}
		}
	}
}
