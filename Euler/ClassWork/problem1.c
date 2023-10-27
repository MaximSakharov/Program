#include"Euler1.h"

unsigned long long Problem_1(const unsigned int number_,
   const unsigned int* multiples_,
   const unsigned int size_)
{
   unsigned long long sum = 0;

   for (unsigned int n = 0; n < number_; ++n)
   {
      for (unsigned int i = 0; i < size_; ++i)
      {
         if (n % multiples_[i] == 0)
         {
            sum += n;
            break;
         }
      }
   }

   return sum;
}