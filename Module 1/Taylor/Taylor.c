#include <stdio.h>
#include"functions.h"
#include "math.h"

double Taylor(const double x_, const double eps_)
{
   int n = 1;

   double prev = 0;
   double cur = 1;

   while (fabs(cur - prev) > eps_)
   {
      prev = cur;
      cur = prev + (pow(x_, n) / Factorial(n));
      n++;
   } 

   return cur;
}