#include <stdio.h>
#include"functions.h"
#include "math.h"

double Factorial(const double number_)
{
   double n = number_;
   double result = 1;

   if (n == 0)
      return 1;

   for (double i = 1; i <= n; i++)
      result = result * i;

   return result;
}