#include"functions.h"
#include"stdbool.h"
#include "math.h"

unsigned int Number1(unsigned const value_)
{
   int a = value_;

   int b = (a / 1000) % 10;

   return b;
}

unsigned int Number2(unsigned const value_)
{
   int a = value_;

   int b = (a / 100) % 10;

   return b;
}

unsigned int Number3(unsigned const value_)
{
   int a = value_;

   int b = (a / 10) % 10;

   return b;
}

unsigned int Number4(unsigned const value_)
{
   int a = value_;

   int b = a % 10;

   return b;
}

unsigned int NumberOfBulls(const unsigned value1_, const unsigned value2_)
{
   int number1 = value1_;
   int number2 = value2_;

   int b = 0;

   if (Number1(number1) == Number1(number2))
      b += 1;
   if (Number2(number1) == Number2(number2))
      b += 1;
   if (Number3(number1) == Number3(number2))
      b += 1;
   if (Number4(number1) == Number4(number2))
      b += 1;

   return b;
}

unsigned int NumberOfCows(const unsigned value1_, const unsigned value2_)
{
   int number1 = value1_;
   int number2 = value2_;

   int c = 0;

   if (Number1(number1) == Number2(number2) || Number1(number1) == Number3(number2) || Number1(number1) == Number4(number2))
      c += 1;
   if (Number2(number1) == Number1(number2) || Number2(number1) == Number3(number2) || Number2(number1) == Number4(number2))
      c += 1;
   if (Number3(number1) == Number2(number2) || Number3(number1) == Number1(number2) || Number3(number1) == Number4(number2))
      c += 1;
   if (Number4(number1) == Number2(number2) || Number4(number1) == Number3(number2) || Number4(number1) == Number1(number2))
      c += 1;

   return c;
}

bool TrueBulls(unsigned const value1_, unsigned const value2_)
{
   int number1 = value1_;
   int number2 = value2_;

   if (Number1(number1) == Number1(number2) && Number2(number1) == Number2(number2) &&
      Number3(number1) == Number3(number2) && Number4(number1) == Number4(number2))
      return true;
   else
      return false;
}

bool RepeatingNumbers(unsigned const value_)
{
   int number = value_;

   if (Number1(number) == Number2(number) || Number1(number) == Number3(number) || Number1(number) == Number4(number))
      return false;
   else true;
   
   if (Number2(number) == Number1(number) || Number2(number) == Number3(number) || Number2(number) == Number4(number))
      return false;
   else true;
   
   if (Number3(number) == Number1(number) || Number3(number) == Number2(number) || Number3(number) == Number4(number))
      return false;
   else true;
   
   if (Number4(number) == Number1(number) || Number4(number) == Number2(number) || Number4(number) == Number3(number))
      return false;
   else true;

}