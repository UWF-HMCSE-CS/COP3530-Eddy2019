#include "Fraction.hpp"
#include <iostream>

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = new Number(numerator);
	this->denominator = new Number(denominator);
}

Fraction::Fraction(const Fraction &other)
{
	std::cout << "Copy Constructor" << std::endl;
	numerator = new Number( other.numerator->GetValue() );
	denominator = new Number( other.denominator->GetValue()  );
}

int Fraction::GetNumerator()
{
	return this->numerator->GetValue();
}

int Fraction::GetDenominator()
{
	return this->denominator->GetValue();
}

void Fraction::SetNumerator(int newNumerator)
{
	this->numerator->SetValue(newNumerator);
}

void Fraction::SetDenominator(int newDenominator)
{
	this->denominator->SetValue(newDenominator);
}

Fraction::~Fraction()
{
	delete this->numerator;
	delete this->denominator;
}







