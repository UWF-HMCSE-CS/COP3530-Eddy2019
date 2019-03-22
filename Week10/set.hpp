#ifndef SET_HPP
#define SET_HPP

class Set
{
	private:
		int* keys;
		bool* occupied;
		int currentLength;
		int hash(int key);
		int findIndex(int key);
	public:
		Set();
		bool find(int key);
		void insert(int key);
};

#endif
