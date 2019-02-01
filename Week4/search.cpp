#include <iostream>

int main()
{
	//Create an array
	int n = 5;
	int myIntegers[] = {2, 3, 4, 6, 7};

	//LINEAR

	//Specify the element that I am searching for
	int searchElement = 6;

	//Starting at the beginning of the array
	//	go through each element in that array
	for(int i = 0; i < n; ++i) // (worst) 1 + (n + 1) + n = 2n + 2; (best) 1 + 1 + 0
	{
		//compare the element at the current location to the element I am searching for
		if(myIntegers[i] == searchElement) // (worst) n (best) 1 
		{
			//if it is that element, print out my position
			std::cout << i << std::endl; // 1
			break; // 1
		}
	}
	//Total # of steps in worst case = (2n + 2) + n + 1 + 1 = 3n + 4
	//Total # of steps in best case = 5


	//BINARY
	//Initialize low and high
	int low = 0; //1
	int high = n - 1; //1
	//Searching through the array
	while(low <= high) //lg(n) + 1
	{
		//Select a midpoint
		int mid = (low + high) / 2; //lg(n)	
		//compare the midpoint to the element we are searching for
		//if it is the element we need, break
		if(myIntegers[mid] == searchElement) //lg(n)
		{
			std::cout << mid << std::endl;//1
			break;//1
		}
		//if the element we are searching for is greater than mid, search right
		if(myIntegers[mid] < searchElement)//lg(n)
		{
			low = mid + 1;
		}
		//if the element we are searching for is less than mid, search left
		else
		{
			high = mid - 1;
		}
	}
	return 0;
}
