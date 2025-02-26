#include "Node.h"

using namespace std;

void InsertAtBeginning(Node<int>*& Head, int Value)
{
	Node<int>* NewNode = new Node<int>();
	NewNode->Data = Value;
	NewNode->Next = Head;
	Head = NewNode;
}

void InsertAtEnd(Node<int>*& Head, int Value)
{
    // We pass Head by reference so that we can modify it in case the list is empty.
    Node<int>* NewNode = new Node<int>();
    NewNode->Data = Value;
    NewNode->Next = NULL;

    // If the list is empty, we set Head to point to the new node.
    if (Head == NULL)
    {
        Head = NewNode;
    }
    else
    {
        // If the list is not empty, we traverse to the last node and link the new node to it.
        //(Note that 'temp' is just a pointer used for traversal and does not affect Head.)
        Node<int>* temp = Head;
        while (temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = NewNode;
    }
}

void PrintList(Node<int>* Head)
{
	while (Head != NULL)
	{
		cout << Head->Data << "  ";
		Head = Head->Next;
	}
}

int main()
{
	Node<int>* Head = NULL;

	InsertAtEnd(Head,1);
	InsertAtEnd(Head,2);
	InsertAtEnd(Head,3);
	InsertAtBeginning(Head,0);
	PrintList(Head);
	
	system("pause > 0");

	return 0;
}