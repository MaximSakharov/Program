#include"functions.h"
#include"stdbool.h"
#include "math.h"

unsigned long long Square(const long long value_)
{
   return value_ * value_;
}

bool Is_Prime(unsigned const long long value_)
{
	if (value_ <= 1)
		return false;

	if (value_ == 2)
		return true;

	if (value_ % 2 == 0)
		return false;

	for (unsigned long long n = 3; n <= sqrt(value_); n += 2)
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


bool isDivisionTo(const long long value_, const int divider_)
{
	long long number = value_;
	int div = divider_;
	int flag = 0;

	for (int i = 1; i <= div; i++)
	{
		if (number % i == 0)
			flag++;
	}
	if (flag == div)
		return true;
	else
		return false;
}