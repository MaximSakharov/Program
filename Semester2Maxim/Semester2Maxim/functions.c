#include <stdio.h>
#include <math.h>
#include "functions.h"
#include <stdbool.h>

double SumOfSquares(int number_)
{
	double sum = 0;

	for (int i = 0; i <= number_; i++)
		sum += pow(i, 2);

	return sum;
}

double SquareOfTheSum(int number_)
{
	double sum = 0;

	for (int i = 0; i <= number_; i++)
		sum += i;

	sum = pow(sum, 2);

	return sum;
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

