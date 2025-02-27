#pragma once
#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
	T Data;
	Node* Next;
	Node* Prev;

};
//***************************************************

void InsertAtBeginning(Node<int> *&Head,int Value) 
{
	/*
		1-Create a new node with the desired value.
		2-Set the next pointer of the new node to the current head of the list.
		3-Set the previous pointer of the current head to the new node.
		4-Set the new node as the new head of the list.
	*/

	Node<int>* NewNode = new Node<int>();
	NewNode->Prev = NULL;
	NewNode->Data = Value;
	NewNode->Next = Head;

	if (Head != NULL)
		Head->Prev = NewNode;

	Head = NewNode;
}

void PrintNodeDetails(Node<int>* Head)
{
	if (Head->Prev != NULL)
		cout << Head->Prev->Data;
	else
		cout << "NULL";

	cout << " <--> " << Head->Data << " <--> ";

	if (Head->Next != NULL)
		cout << Head->Next->Data << "\n";
	else
		cout << "NULL";
}

void PrintListDetails(Node<int>* Head)
{
	cout << "\n\n";
	while (Head != NULL)
	{
		PrintNodeDetails(Head);
		Head = Head->Next;
	}
}

void PrintList(Node<int>* Head)
{
	cout << "NULL <--> ";
	while (Head != NULL) 
	{
		cout << Head->Data << " <--> ";
		Head = Head->Next;
	}
	cout << "NULL";
}

int main() 
{
	Node<int>* Head  = NULL;

	InsertAtBeginning(Head, 5);
	InsertAtBeginning(Head, 4);
	InsertAtBeginning(Head, 3);
	InsertAtBeginning(Head, 2);
	InsertAtBeginning(Head, 1);
	
	cout << "\nLinked List Contenet:\n";
	PrintList(Head);
	PrintListDetails(Head);


	system("pause > 0");

	return 0;
}
