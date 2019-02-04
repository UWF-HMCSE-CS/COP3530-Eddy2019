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

int main()
{
	std::cout << factorial(5) << std::endl;
	std::cout << fib(2) << std::endl;
	std::cout << fib(3) << std::endl;
	std::cout << fib(4) << std::endl;
	std::cout << fib(10) << std::endl;
	std::cout << fib(20) << std::endl;
	std::cout << fib(30) << std::endl;
	std::cout << fib(40) << std::endl;
	std::cout << fib(50) << std::endl;
	std::cout << fib(75) << std::endl;
	std::cout << fib(100) << std::endl;
	std::cout << fib(1000) << std::endl;
	std::cout << fib(10000) << std::endl;
	std::cout << fib(100000) << std::endl;
	return 0;
}

