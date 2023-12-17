#include"functions.h"
#include"stdbool.h"
#include "math.h"
#include <stdlib.h>
#include <time.h>

unsigned int Number(unsigned const value_, int pos_) {
   int a = value_;
   int b = 0;
   if (pos_ == 1) {
      b = (a / 1000) % 10;
   }
   else if (pos_ == 2) {
      b = (a / 100) % 10;
   }
   else if (pos_ == 3) {
      b = (a / 10) % 10;
   }
   else if (pos_ == 4) {
      b = a % 10;
   }
   return b;
}

bool fourDigit(unsigned const value_)
{
   int number = value_;
   int i = 0;
   for (; number > 0; i++)
   {
      number /= 10;
   }

   if (i == 4)
      return true;
   else
      return false;
}

int RandomNumber(unsigned const value_) 
{
   return (1000 + rand() % 9000);
}

unsigned int NumberOfBulls(const unsigned value1_, const unsigned value2_) {
   int b = 0;
   for (int i = 1; i <= 4; i++) {
      if (Number(value1_, i) == Number(value2_, i)) {
         b += 1;
      }
   }
   return b;
}

unsigned int NumberOfCows(const unsigned value1_, const unsigned value2_) {
   int c = 0;
   for (int i = 1; i <= 4; i++) {
      for (int j = 1; j <= 4; j++) {
         if (i != j && Number(value1_, i) == Number(value2_, j)) {
            c += 1;
         }
      }
   }
   return c;
}

bool NotRepeatingNumbers(unsigned const value_) {
   for (int i = 1; i <= 4; i++) {
      for (int j = i + 1; j <= 4; j++) {
         if (Number(value_, i) == Number(value_, j)) {
            return false;
         }
      }
   }
   return true;
}