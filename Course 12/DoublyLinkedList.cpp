//#pragma once
//#include <iostream>
//using namespace std;
//
//template <class T>
//class Node
//{
//public:
//	T Data;
//	Node* Next;
//	Node* Prev;
//
//};
////***************************************************
//
//void InsertAtBeginning(Node<int> *&Head,int Value) 
//{
//	/*
//		1-Create a new node with the desired value.
//		2-Set the next pointer of the new node to the current head of the list.
//		3-Set the previous pointer of the current head to the new node.
//		4-Set the new node as the new head of the list.
//	*/
//
//	Node<int>* NewNode = new Node<int>();
//	NewNode->Prev = NULL;
//	NewNode->Data = Value;
//	NewNode->Next = Head;
//
//	if (Head != NULL)
//		Head->Prev = NewNode;
//
//	Head = NewNode;
//}
//
//void InsertAfter(Node<int> *CurrentNode, int Value)
//{
//	/*  
//		1 - Create a new node with the desired value.
//		2-Set the next pointer of the new node to the next node of the current node.
//		3-Set the previous pointer of the new node to the current node.
//		4-Set the next pointer of the current node to the new node.
//		5-Set the previous pointer of the next node to the new node(if it exists).
//	*/
//
//	Node<int>* NewNode = new Node<int>();
//	NewNode->Data = Value;
//	
//	NewNode->Next = CurrentNode->Next;
//	NewNode->Prev = CurrentNode;
//
//	if (CurrentNode->Next != NULL)
//		CurrentNode->Next->Prev = NewNode;
//	
//	CurrentNode->Next = NewNode;
//
//}
//
//void InsertAtEnd(Node<int>*& Head, int Value)
//{
//     //We pass Head by reference so that we can modify it in case the list is empty.
//    Node<int>* NewNode = new Node<int>();
//    NewNode->Data = Value;
//    NewNode->Next = NULL;
//    NewNode->Prev = NULL;
//
//    //If the list is empty, we set Head to point to the new node.
//    if (Head == NULL)
//    {
//        Head = NewNode;
//    }
//    else
//    {
//       //If the list is not empty, we traverse to the last node and link the new node to it.
//      //(Note that 'temp' is just a pointer used for traversal and does not affect Head.)
//       
//		Node<int>* temp = Head;
//		while (temp->Next != NULL)
//        {
//            temp = temp->Next;
//        }
//        temp->Next = NewNode;
//		NewNode->Prev = temp;
//    }
//}
//
//void DeleteNode(Node<int>*& Head, Node<int>*& NodeToDelete)
//{	
//	/*
//	   1-Set the next pointer of the previous node to the next pointer of the current node.
//	   2-Set the previous pointer of the next node to the previous pointer of the current node.
//	   3-Delete the current node.
//	*/
//
//	if (Head == NULL || NodeToDelete == NULL)
//		return;
//
//	if (NodeToDelete == Head)
//	{
//		Head = NodeToDelete->Next;
//	}
//
//
//	if (NodeToDelete->Next != NULL)
//	{
//		NodeToDelete->Prev->Next = NodeToDelete->Next;
//	}
//
//	if (NodeToDelete->Prev != NULL)
//	{
//		NodeToDelete->Next->Prev = NodeToDelete->Prev;
//	}
//	
//	delete NodeToDelete;
//}
//
//void DeleteFirstNode(Node<int>*& Head)
//{
//	/*
//	   1-Store a reference to the head node in a temporary variable.
//	   2-Update the head pointer to point to the next node in the list.
//	   3-Set the previous pointer of the new head to NULL.
//	   4-Delete the temporary reference to the old head node.
//   */
//
//	if (Head == NULL)
//		return;
//
//	Node<int>* FirstNode = Head;
//	Head = Head->Next;
//
//	if (Head != NULL)
//		Head->Prev = NULL;
//
//	delete FirstNode;
//}
//
//void DeleteLastNode(Node<int>*& Head)
//{
//	/*
//		1-Traverse the list to find the last node.
//		2-Set the next pointer of the second-to-last node to NULL.
//		3-Delete the last node.
//	*/
//
//	if (Head == NULL)
//	{
//		return;
//	}
//	if (Head->Next == NULL) 
//	{
//		delete Head;
//		Head = NULL;
//		return;
//	}
//
//	Node<int>* current = Head;
//
//	while (current->Next->Next != NULL) 
//	{
//		current = current->Next;
//	}
//
//	Node<int>* temp = current->Next;
//	current->Next = NULL;
//	delete temp;
//}
//
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
//void PrintNodeDetails(Node<int>* Head)
//{
//	if (Head->Prev != NULL)
//		cout << Head->Prev->Data;
//	else
//		cout << "NULL";
//
//	cout << " <--> " << Head->Data << " <--> ";
//
//	if (Head->Next != NULL)
//		cout << Head->Next->Data << "\n";
//	else
//		cout << "NULL";
//}
//
//void PrintListDetails(Node<int>* Head)
//{
//	cout << "\n\n";
//	while (Head != NULL)
//	{
//		PrintNodeDetails(Head);
//		Head = Head->Next;
//	}
//}
//
//void PrintList(Node<int>* Head)
//{
//	cout << "NULL <--> ";
//	while (Head != NULL) 
//	{
//		cout << Head->Data << " <--> ";
//		Head = Head->Next;
//	}
//	cout << "NULL";
//}
//
//int main() 
//{
//	Node<int>* Head  = NULL;
//
//	InsertAtBeginning(Head, 5);
//	InsertAtBeginning(Head, 4);
//	InsertAtBeginning(Head, 3);
//	InsertAtBeginning(Head, 2);
//	InsertAtBeginning(Head, 1);
//	
//	cout << "\nLinked List Contenet:\n";
//	PrintList(Head);
//	PrintListDetails(Head);
//
//
//	Node<int>* N1 = Find(Head,2);
//
//	InsertAfter(N1, 500);
//	
//	cout << "\n\n\n\nLinked List Contenet After Add :\n";
//
//	PrintList(Head);
//	PrintListDetails(Head);
//
//
//	InsertAtEnd(Head, 600);
//	cout << "\n\n\n\nLinked List Contenet After InsertAtEnd :\n";
//
//	PrintList(Head);
//	PrintListDetails(Head);
//		
//	
//	DeleteNode(Head,N1);
//	cout << "\n\n\n\nLinked List Contenet After DeleteNode :\n";
//
//	PrintList(Head);
//	PrintListDetails(Head);
//
//
//	DeleteFirstNode(Head);
//	cout << "\n\n\n\nLinked List Contenet After DeleteFirstNode :\n";
//
//	PrintList(Head);
//	PrintListDetails(Head);	
//	
//	
//	DeleteLastNode(Head);
//	cout << "\n\n\n\nLinked List Contenet After DeleteLastNode :\n";
//
//	PrintList(Head);
//	PrintListDetails(Head);
//
//	system("pause > 0");
//
//	return 0;
//}
