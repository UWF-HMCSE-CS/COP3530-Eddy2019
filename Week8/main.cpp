#include <iostream>

void swap(int* firstElement, int* secondElement)
{
	int temp = *firstElement;
	*firstElement = *secondElement;
	*secondElement = temp;
}

void moveIntoSortedPosition(int* arrayBeingSorted, int nextToSort)
{
	int precedingElement = nextToSort - 1;
	while((nextToSort > 0) && (arrayBeingSorted[nextToSort] < arrayBeingSorted[precedingElement]))
	{
		swap(&arrayBeingSorted[nextToSort], &arrayBeingSorted[precedingElement]);
		nextToSort = nextToSort - 1;
		precedingElement = precedingElement - 1;
	}
}

void insertionSort(int* arrayToSort, int size)
{
	for(int nextToSort = 1; nextToSort < size; ++nextToSort)
	{
		moveIntoSortedPosition(arrayToSort, nextToSort);
	}
}

int main()
{
	int unsorted[] = {2, 1, 3, 9, 10, 5, 4};
	int size = 7;
	insertionSort(unsorted, size);
	for(int i = 0; i < size; ++i)
		std::cout << unsorted[i] << std::endl;

	return 0;
}
