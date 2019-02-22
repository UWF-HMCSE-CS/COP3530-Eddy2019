#include "linked_list.hpp"
#include <iostream>

template<typename T>
LinkedList<T>::LinkedList()
{
	this->head = nullptr;
}

template<class T>
void LinkedList<T>::InsertAtHead(T value)
{
	Node<T>* newNode = new Node<T>(value);
	newNode->SetNext(this->head);
	this->head = newNode;
}

template<class T>
void LinkedList<T>::Print()
{
	Node<T>* currentNode = this->head;
	while(currentNode != nullptr)
	{
		std::cout << currentNode->GetValue() << std::endl;
		currentNode = currentNode->GetNext();
	}

}



template class LinkedList<int>;
