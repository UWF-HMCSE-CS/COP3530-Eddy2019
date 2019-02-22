#include "node.hpp"
#include <string>

template<typename T>
Node<T>::Node()
{
	this->value = 0;
	this->next = nullptr;
}

template<typename T>
Node<T>::Node(T value)
{
	this->value = value;
	this->next = nullptr;
}

template<typename T>
T Node<T>::GetValue()
{
	return this->value;
}

template<typename T>
void Node<T>::SetNext(Node* next)
{
	this->next = next;
}

template<typename T>
Node<T>* Node<T>::GetNext()
{
	return this->next;
}

template class Node<int>;
template class Node<double>;





