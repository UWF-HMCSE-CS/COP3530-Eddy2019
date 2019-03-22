#include "set.hpp"
#include <iostream>

Set::Set()
{
	currentLength = 20;
	keys = new int[currentLength];
	occupied = new bool[currentLength];
}

bool Set::find(int key)
{
	int index = hash(key);	
	int currentIndex = index;
	int i = 1;
	bool first = true;
	while(keys[currentIndex] != key)
	{
		if(!first && currentIndex == index)
		{
			return false;
		}
		first = false;
		currentIndex = (index + i++) % currentLength;
	}
	return true;

}

void Set::insert(int key)
{
	int index = findIndex(key);
	occupied[index] = true;
	keys[index] = key;
}

int Set::findIndex(int key)
{
	int firstIndex = hash(key);
	int currentIndex = firstIndex;
	int i = 1;
	while(occupied[currentIndex] == true)
	{
		currentIndex = (firstIndex + i++) % currentLength;
	}
	return currentIndex;
}

int Set::hash(int key)
{
	return key % currentLength;
}
