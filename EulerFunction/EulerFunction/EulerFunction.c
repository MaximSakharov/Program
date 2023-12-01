#include"function.h"
#include"stdbool.h"
#include "math.h"
#include"EulerFunction.h"

unsigned int EulerFunction(unsigned const long long value_)
{
   int Number = value_;
   int RelativePrime = 0;

   if (Number == 0)
      return 0;

   if (Number == 1)
      return 1;

   if (Is_Prime(Number) == true)
      return (Number - 1);

   for (int i = 1; i < Number; i++)
   {
      int counter = 0;

      for (int j = 1; j <= i; j++)
      {
         if (i % j == 0)
            if (Number % j == 0)
               counter++;
      }
      
      if (counter == 1)
         RelativePrime++;
   }

   return RelativePrime;
}