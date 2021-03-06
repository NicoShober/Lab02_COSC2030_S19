// LLList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Node  //See your textbook Fig. 4.4
{
public:
	double datum;
	Node * nextnode;
	// Constructor
	Node()
	{
		datum = 0.0;
		nextnode = NULL;
	}
};


int main()
{
	int count = 0;
	float sum = 0;
	cout << "LLList starting." << endl;
	//Create the first node and its pointer.
	Node * head = new Node;
	Node * currentnode = head;
	head->datum = 7853.84;
	//Now let's create a new node, with a datum.

	Node * tmp = new Node;
	tmp->datum = 3462.01;
	//Now we have two Nodes floating around... but they are not connected.
	//We connect them by putting tmp's address in the nextnode of the head.
	
	//Let's see if we can get to both of them, and write them out.

	Node * NNode1 = new Node; //creating new node1
	NNode1->datum = 3778.4; //adding data values
	tmp->nextnode = NNode1; //assigning pointer for the next node

	Node * NNode2 = new Node; //creating new node2
	NNode2->datum = 64.0; //adding data values
	NNode1->nextnode = NNode2; //assigning pointer for the next node

	Node * NNode3 = new Node; //creating new node3
	NNode3->datum = 56.9; //adding data values
	NNode2->nextnode = NNode3; //assigning pointer for the next node

	Node * NInsert = new Node; //initially added into the LL as the third node
	NInsert->datum = 9699.2; //adding data values
	tmp->nextnode = NInsert; //assigning pointer for the next node and changing the locations so it fits into the 3rd node in the LL
	NInsert->nextnode = NNode1; //assigning pointer for the next node and changing the locations so it fits into the 3rd node in the LL

	head->nextnode = NInsert; //changing the pointer address of the the 1st node in the LL to bypass/delete the second node

	
	while (currentnode != NULL)
	{
		cout << "Datum is " << currentnode->datum << endl;
		sum += currentnode->datum; //takes the value of the datum and adds it to the sum
		currentnode = currentnode->nextnode;
		count++; //keeps track of how many times the while loop is ran through
	}
	cout << "Count: " << count << endl;
	cout << "Sum: " << sum << endl;
	return 0;
}

