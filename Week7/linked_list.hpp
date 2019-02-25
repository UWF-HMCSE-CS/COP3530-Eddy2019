#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "node.hpp"

template<typename T>
class LinkedList
{
	private:
		Node<T>* head;
	        Node<T>* tail;
		int size;
	public:
		LinkedList();
		void InsertAtHead(T value);
		void InsertAt(int position, T value);
		void Print();

};

#endif
