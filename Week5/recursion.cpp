#include <iostream>

//5! = 5 * 4 * 3 * 2 * 1 = 120 n! = n * (n - 1)!
int factorial(int n)
{
	if(n == 1)
		return 1;
	return n * factorial(n - 1);
}

//fibonacci - 1 1 2 3 5 8 13 21 34 55 fib(n) = fib(n-1) + fib(n-2)

int fib(int n)
{
	if(n < 2)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int cumulativeSum(int n)
{
	if(n == 1)
		return 1;
	return n + cumulativeSum(n - 1);
}

int GCD(int a, int b)
{
	if(a == b)
		return a;
	if(a < b)
		return GCD(a, b - a);
	return GCD(a - b, b);
}

int binarySearch(int array[], int low, int high, int searchElement)
{
	if(high < low)
	{
		return -1;
	}

	int mid = (low + high) / 2;
	if(array[mid] == searchElement)
	{
		return mid;
	}

	if(array[mid] < searchElement)
	{
		return binarySearch(array, mid + 1, high,searchElement);
	}

	return binarySearch(array, low, mid - 1, searchElement);
}

int main()
{
	std::cout << factorial(5) << std::endl;
	std::cout << fib(2) << std::endl;
	std::cout << fib(3) << std::endl;
	std::cout << fib(4) << std::endl;
	std::cout << "Cumulative Sum: " << cumulativeSum(2) << std::endl;
	std::cout << "Cumulative Sum: " << cumulativeSum(3) << std::endl;
	std::cout << "Cumulative Sum: " << cumulativeSum(4) << std::endl;
	std::cout << "GCD: " << GCD(64,16) << std::endl;
	std::cout << "GCD: " << GCD(8,12) << std::endl;

	int array[5] = {1, 2, 3, 4, 5};
	std::cout << "Location: " << binarySearch(array, 0, 4, 2) << std::endl;
	std::cout << "Location: " << binarySearch(array, 0, 4, 5) << std::endl;
	return 0;
}

