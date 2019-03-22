#include <iostream>
#include "set.hpp"

int main()
{
	int key = 29;
	Set* newSet = new Set();
	newSet->insert(key);
	bool found = newSet->find(key);
	newSet->insert(9);
	found = newSet->find(key);
	std::cout << found << std::endl;
	return 0;
}
