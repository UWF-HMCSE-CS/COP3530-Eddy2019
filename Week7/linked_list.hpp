#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "node.hpp"

template<typename T>
class LinkedList
{
	private:
		Node<T>* head;
	public:
		LinkedList();
		void InsertAtHead(T value);
		void Print();

};

#endif
