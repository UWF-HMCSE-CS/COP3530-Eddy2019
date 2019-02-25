#include <iostream>
#include <string>
#include "node.hpp"
#include "linked_list.hpp"

int main()
{
	Node<int>* newNode = new Node<int>(12);
	Node<int>* nextNode = new Node<int>(24);
	if(12 == newNode->GetValue())
		std::cout << "GetValue passed" << std::endl;
	newNode->SetNext(nextNode);
	if(24 == newNode->GetNext()->GetValue())
		std::cout << "GetNext passed" << std::endl;
	Node<double>* doubleNode = new Node<double>(3.678);
	if((3.678 - doubleNode->GetValue() < .001) && (3.678 - doubleNode->GetValue() > -.001))
		std::cout << "Double worked" << std::endl;

	LinkedList<int>* linkedList = new LinkedList<int>();
	linkedList->InsertAtHead(5);
	linkedList->InsertAtHead(3);
	linkedList->InsertAtHead(1);
	linkedList->Print();
	linkedList->InsertAt(2, 4);
	linkedList->Print();

	return 0;
}
