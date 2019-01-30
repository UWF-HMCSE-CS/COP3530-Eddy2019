#include <iostream>

int main()
{
	//Create an array
	int n = 5;
	int myIntegers[] = {3, 7, 4, 2, 6};

	//LINEAR

	//Specify the element that I am searching for
	int searchElement = 2;

	//Starting at the beginning of the array
	//	go through each element in that array
	for(int i = 0; i < n; ++i) \\ (worst) 1 + (n + 1) + n = 2n + 2; (best) 1 + 1 + 0
	{
		//compare the element at the current location to the element I am searching for
		if(myIntegers[i] == searchElement) \\ (worst) n (best) 1 
		{
			//if it is that element, print out my position
			std::cout << i << std::endl; \\ 1
			break; \\ 1
		}
	}
	\\Total # of steps in worst case = (2n + 2) + n + 1 + 1 = 3n + 4
	\\Total # of steps in best case = 5


	\\BINARY


	return 0;
}
