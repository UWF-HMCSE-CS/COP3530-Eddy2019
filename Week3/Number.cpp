#include "Number.hpp"
Number::Number(int value)
{
	this->value = value;
}

int Number::GetValue()
{
	return this->value;
}

void Number::SetValue(int newValue)
{
	this->value = newValue;
}
