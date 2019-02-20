#ifndef NODE_HPP
#define NODE_HPP

template<typename T>
class Node
{
	private:
		T value;
		Node* next;
	public:
		Node();
		Node(T value);
		T GetValue();
		void SetNext(Node<T>* next);
		Node* GetNext();

};


#endif
