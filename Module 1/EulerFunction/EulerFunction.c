#include"function.h"
#include"stdbool.h"
#include "math.h"
#include"EulerFunction.h"

unsigned int EulerFunction(const unsigned long long value_)
{
   int rel_prime = 0;

   if (value_ == 0)
      return 0;

   if (value_ == 1)
      return 1;

   if (Is_Prime(value_) == true)
      return (value_ - 1);

   for (int i = 1; i < value_; ++i)
   {
      if (NOD(i, value_) == 1)
         rel_prime++;
   }

   return rel_prime;
}

int NOD(int a, int b)
{
   if (a == b)
      return a;

   if (a > b)
      return NOD(a - b, b);
   else
      return NOD(a, b - a);
}