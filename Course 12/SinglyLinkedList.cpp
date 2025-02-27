//#pragma once
//#include <iostream>
//
//using namespace std;
//
//template <class T>
//class Node
//{
//public:
//	T Data;
//	Node* Next;
//
//};
//
//
//void InsertAtBeginning(Node<int>* & Head,int Value)
//{
//	Node<int>* NewNode = new Node<int>();
//	NewNode->Data = Value;
//	NewNode->Next = Head;
//	Head = NewNode;
//}
//
//void InsertAfter(Node<int>*& Node1, int Value)
//{
//	Node<int>* NewNode = new Node<int>();
//	NewNode->Data = Value;
//	NewNode->Next = Node1->Next;
//	Node1->Next = NewNode;
//}
//
//void InsertAtEnd(Node<int>*& Head, int Value)
//{
//     We pass Head by reference so that we can modify it in case the list is empty.
//    Node<int>* NewNode = new Node<int>();
//    NewNode->Data = Value;
//    NewNode->Next = NULL;
//
//     If the list is empty, we set Head to point to the new node.
//    if (Head == NULL)
//    {
//        Head = NewNode;
//    }
//    else
//    {
//         If the list is not empty, we traverse to the last node and link the new node to it.
//        (Note that 'temp' is just a pointer used for traversal and does not affect Head.)
//        Node<int>* temp = Head;
//        while (temp->Next != NULL)
//        {
//            temp = temp->Next;
//        }
//        temp->Next = NewNode;
//    }
//}
//
//void DeleteNode(Node<int>*& Head, int Value)
//{
//	if (Head == NULL)
//		return;
//
//	Node<int>* PreviousNode, * CurrentNode;
//	PreviousNode = CurrentNode = Head;
//
//	if (CurrentNode->Data == Value)
//	{
//		Head = CurrentNode->Next;
//		delete CurrentNode;
//		return;
//	}
//
//	while (CurrentNode != NULL && CurrentNode->Data != Value)
//	{
//		PreviousNode = CurrentNode;
//		CurrentNode = CurrentNode->Next;
//	}
//
//	if (CurrentNode == NULL)
//		return;
//
//	PreviousNode->Next = CurrentNode->Next;
//	delete CurrentNode;
//}
//
//void DeleteFirstNode(Node<int>*& Head)
//{
//	if (Head == NULL)
//		return;
//
//	Node<int>* FirstNode = Head;
//
//	Head = FirstNode->Next;
//	delete FirstNode;
//}
//
//void DeleteLastNode(Node<int>*& Head)
//{
//	if (Head == NULL)
//		return;
//
//	Node<int>* PreviousNode, * CurrentNode;
//	PreviousNode = CurrentNode = Head;
//
//	if (CurrentNode->Next == NULL)
//	{
//		Head = NULL;
//		delete CurrentNode;
//		return;
//	}
//
//	while (CurrentNode != NULL && CurrentNode->Next != NULL)
//	{
//		PreviousNode = CurrentNode;
//		CurrentNode = CurrentNode->Next;
//	}
//
//	if (CurrentNode == NULL)
//		return;
//
//	PreviousNode->Next = NULL;
//	delete CurrentNode;
//}
//
//Node<int>* Find(Node<int>* Head,int Value)
//{
//	while (Head != NULL)
//	{
//		if (Head->Data == Value)
//			return Head;
//
//		Head = Head->Next;
//	}
//	return NULL;
//}
//
//void PrintList(Node<int>* Head)
//{
//	while (Head != NULL)
//	{
//		cout << Head->Data << "  ";
//		Head = Head->Next;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Node<int>* Head = NULL;
//	InsertAtEnd(Head, 1);
//	InsertAtEnd(Head, 2);
//	InsertAtEnd(Head, 3);
//	InsertAtEnd(Head, 4);
//	InsertAtEnd(Head, 5);
//	InsertAtEnd(Head, 6);
//	PrintList(Head);
//
//	DeleteFirstNode(Head);
//	DeleteLastNode(Head);
//
//	PrintList(Head);
//
//	system("pause > 0");
//
//	return 0;
//}