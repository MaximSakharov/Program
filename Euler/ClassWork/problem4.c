#include"Euler1.h"
#include"stdbool.h"

unsigned long long Problem_4()
{
	unsigned long long product = 0;
	long long productfin = 0;

	for (int number1_ = 100; number1_ < 1000; number1_++)
	{
		for (int number2_ = 100; number2_ < 1000; number2_++)
		{
			product = number1_ * number2_;

			if (isPalindrom(product) && productfin < product)
				productfin = product;
		}
	}
	return productfin;
}