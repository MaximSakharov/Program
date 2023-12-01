#include"function.h"
#include"stdbool.h"
#include "math.h"

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