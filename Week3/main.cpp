#include <iostream>
#include "Fraction.hpp"

int main()
{
	Fraction *myFraction = new Fraction(2, 4);
	Fraction secondFraction = *myFraction;
	std::cout << myFraction->GetNumerator() << std::endl;
	std::cout << secondFraction.GetNumerator() << std::endl;

	delete myFraction;
}
