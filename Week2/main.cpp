#include <iostream>

#include "calculator.hpp"

int main()
{
	std::cout << "Hello World" << std::endl;
	Calculator calc;

	std::cout << calc.add(2,3) << std::endl;

	return 0;
}
