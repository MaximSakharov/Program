#include <stdio.h>
#include <math.h>
#include "functions.h"
#include "Euler.h"
#include <stdbool.h>

double Problem_6(int number_)
{
	double sum = 0;

	sum = SquareOfTheSum(number_) - SumOfSquares(number_);

	return sum;
}

int Problem_7(int number_)
{
	int counter = 0;
	int result = 0;

	for (int i = 0; counter != number_; i++)
		if (Is_Prime(i) == true)
		{
			counter++;
			result = i;
		}

	return result;
}