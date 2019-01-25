#include "Fraction.hpp"

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = new Number(numerator);
	this->denominator = new Number(denominator);
}

int Fraction::GetNumerator()
{
	return this->numerator->GetValue();
}

Number Fraction::GetDenominator()
{
	return this->denominator;
}

void Fraction::SetNumerator(Number newNumerator)
{
	this->numerator = newNumerator;
}

void Fraction::SetDenominator(Number newDenominator)
{
	this->denominator = newDenominator;
}
