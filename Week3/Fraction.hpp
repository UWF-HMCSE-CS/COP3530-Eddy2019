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
		Fraction(const Fraction &other);
		int GetNumerator();
		int GetDenominator();

		void SetNumerator(int newNumerator);
		void SetDenominator(int newDenominator);

		~Fraction();
};

#endif
