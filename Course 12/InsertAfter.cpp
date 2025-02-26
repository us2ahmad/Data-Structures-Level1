#include "Node.h"

using namespace std;

void InsertAtBeginning(Node<int>* & Head,int Value)
{
	Node<int>* NewNode = new Node<int>();
	NewNode->Data = Value;
	NewNode->Next = Head;
	Head = NewNode;
}

void InsertAfter(Node<int>*& Node1, int Value)
{
	Node<int>* NewNode = new Node<int>();
	NewNode->Data = Value;
	NewNode->Next = Node1->Next;
	Node1->Next = NewNode;
}

void PrintList(Node<int>* Head)
{
	while (Head != NULL)
	{
		cout << Head->Data << "  ";
		Head = Head->Next;
	}
}

Node<int>* Find(Node<int>* Head,int Value)
{
	while (Head != NULL)
	{
		if (Head->Data == Value)
			return Head;

		Head = Head->Next;
	}
	return NULL;
}

int main() 
{
	Node<int>* Head  = NULL;

	InsertAtBeginning(Head,1);
	InsertAtBeginning(Head,2);
	InsertAtBeginning(Head,3);
	InsertAtBeginning(Head,4);
	InsertAtBeginning(Head,5);

	cout << "\n\nList Before Insert : \t";
	PrintList(Head);

	Node<int>* Node =  Find(Head,2);
	InsertAfter(Node,500);

	cout << "\n\nList After Insert  : \t";
	PrintList(Head);

	system("pause > 0");

	return 0;
}