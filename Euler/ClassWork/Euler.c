#include"Euler1.h"
#include"stdbool.h"

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

unsigned long long Problem_2(const unsigned int number_)
{
   unsigned long long sum = 0;
   unsigned int n1 = 1;
   unsigned int n2 = 2;
   unsigned int i = 0;

   while (i < number_)
   {
      if (n2 % 2 == 0)
         sum = sum + n2;

      i = n2;
      n2 = n2 + n1;
      if (n2 >= number_)
         break;
      n1 = i;
   }

   return sum;
}

unsigned long long Problem_3(long long number_)
{
   unsigned long long number = number_;
   unsigned long long n = 2;

   while (number % 2 == 0)
      number /= 2;

   n++;

   while (n < number)
   {
      if (number % n == 0) 
      {
         if (Is_Prime(n) == true) 
         {
            while (number % n == 0)
               number /= n;
         }
      }

      n+=2;
   }

   return number;
}

unsigned long long Problem_4()
{
   unsigned long long product = 0;
   long long productfin = 0;

   for (int number1_ = 100; number1_ < 1000; number1_++)
   {
      for (int number2_ = 100; number2_ < 1000; number2_++)
      {
         product = number1_ * number2_;

         if (isPalindrom(product) && productfin < product)
            productfin = product;
      }
   }
   return productfin;
}

unsigned long long Problem_5()
{
   long long number = 20;
   long long maxnumber = 0;


   while (isDivision1to20(number) == false)
      number+=20;

   if (isDivision1to20(number) == true)
      maxnumber = number;
   
   return maxnumber;
}