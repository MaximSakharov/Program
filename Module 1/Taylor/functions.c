#include <stdio.h>
#include"functions.h"
#include "math.h"

double Factorial(const double number_)
{
   double result = 1;

   if (number_ == 0)
      return 1;

   for (double i = 1; i <= number_; i++)
      result = result * i;

   return result;
}