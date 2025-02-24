#include "Node.h"

using namespace std;

int main() 
{
	Node<int>* Head  = NULL;
	Node<int>* Node1 = NULL;
	Node<int>* Node2 = NULL;
	Node<int>* Node3 = NULL;

	// allocate 3 nodes in the heap

	Node1 = new Node<int>();
	Node2 = new Node<int>();
	Node3 = new Node<int>();


	// Assign value values
	Node1->Data = 10;
	Node2->Data = 20;
	Node3->Data = 30;

	// Connect nodes
	Node1->Next = Node2;
	Node2->Next = Node3;
	Node3->Next = NULL;

	// print the linked list value
	Head = Node1;

	while (Head != NULL)
	{
		cout << Head->Data << "  ";
		Head = Head->Next;
	}
	
	system("pause > 0");

	return 0;
}