#include <iostream>
#include "Fraction.hpp"

int main()
{
	Fraction *myFraction = new Fraction(2, 4);
	std::cout << myFraction->GetNumerator() << std::endl;
}
