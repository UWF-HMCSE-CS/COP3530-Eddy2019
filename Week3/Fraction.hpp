#ifndef FRACTION_HPP
#define FRACTION_HPP

#include "Number.hpp"

class Fraction
{
	private:
		Number *numerator;
		Number *denominator;
	public:
		Fraction(int numerator, int denominator);
		int GetNumerator();
		Number GetDenominator();

		void SetNumerator(Number newNumerator);
		void SetDenominator(Number newDenominator);
};

#endif
