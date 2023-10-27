#include"functions.h"
#include"stdbool.h"
#include "math.h"

unsigned long long Square(const long long value_)
{
   return value_ * value_;
}

bool Is_Prime(unsigned const long long value_)
{
	if (value_ % 2 == 0 && value_!=2)
		return false;


	for (unsigned int n = 3; n < sqrt(value_) + 1; n += 2)
	{
		if (value_ % n == 0)
			return false;
	}

	return true;
}

unsigned long long Reverse(const long long value_)
{
	int reverse = 0;
	int product = value_;
	
	while (product > 0)
	{
		reverse = reverse*10 + product % 10;
		product = product / 10;
	}

	return reverse;
}

bool isPalindrom(const long long value_)
{
	return (value_ == Reverse(value_));
}


bool isDivision1to20(const long long value_)
{
	long long number = value_;
	int flag = 0;

	for (int i = 1; i <= 20; i++)
	{
		if (number % i == 0)
			flag++;
	}
	if (flag == 20)
		return true;
	else
		return false;
}