#include <stdio.h>
#include"functions.h"
#include "math.h"

double Taylor(const double x_, const double n_)
{
   double x = x_;
   double n = n_;
   double result = 0;

   for (int i = 0; i < n; i++)
      result = result + (pow(x, i) / Factorial(i));

   return result;
}