#include"Euler1.h"
#include"stdbool.h"

unsigned long long Problem_5()
{
	long long number = 1;
	long long maxnumber = 0;


	while (isDivision1to20(number) == false)
	{
			number = number++;
	}
	
	if (isDivision1to20(number) == true)
		maxnumber = number;

	return maxnumber;
}