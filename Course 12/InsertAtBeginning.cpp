#include "Node.h"

using namespace std;

void InsertAtBeginning(Node<int>* & Head,int Value)
{
	Node<int>* NewNode = new Node<int>();
	NewNode->Data = Value;
	NewNode->Next = Head;
	Head = NewNode;
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
	Node<int>* Head  = NULL;

	InsertAtBeginning(Head,1);
	InsertAtBeginning(Head,2);
	InsertAtBeginning(Head,3);
	InsertAtBeginning(Head,4);
	InsertAtBeginning(Head,5);

	PrintList(Head);

	system("pause > 0");

	return 0;
}