#include "linked_list.hpp"
#include <iostream>

template<typename T>
LinkedList<T>::LinkedList()
{
	this->head = nullptr;
	this->tail = nullptr;
	this->size = 0;
}

template<class T>
void LinkedList<T>::InsertAtHead(T value)
{
	Node<T>* newNode = new Node<T>(value);
	newNode->SetNext(this->head);
	this->head = newNode;
	if(this->tail == nullptr)
	{
		this->tail = newNode;
	}
	this->size++;
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

template<class T>
void LinkedList<T>::InsertAt(int position, T value)
{
	if(position < 0 || position > size)
	{
		return;
	}
	if(position == 0)
	{
		InsertAtHead(value);
		return;
	}
	if(position == this->size)
	{
		//Append
	}

	Node<T>* newNode = new Node<T>(value);
	int currentPosition = 0;
	Node<T>* currentNode = this->head;
	while(currentPosition != position - 1)
	{
		currentPosition++;
		currentNode = currentNode->GetNext();
	}
	newNode->SetNext(currentNode->GetNext());
	currentNode->SetNext(newNode);
	this->size++;	
}

template class LinkedList<int>;











