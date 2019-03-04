#include <iostream>

void insertionSort(int* arrayToSort, int size)
{
	int j = 1;
	while((j > 0) && (arrayToSort[j] < arrayToSort[j-1]))
	{
		int temp = arrayToSort[j];
		arrayToSort[j] = arrayToSort[j-1];
		arrayToSort[j-1] = temp;
	}
			
}

int main()
{
	int unsorted[] = {2, 1};
	int size = 2;
	insertionSort(unsorted, size);
	for(int i = 0; i < size; ++i)
		std::cout << unsorted[i] << std::endl;

	return 0;
}
