#include <iostream>
#include "node.hpp"

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
	std::cout << doubleNode->GetValue() << std::endl;
	return 0;
}
