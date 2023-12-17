#include <stdio.h>
#include"functions.h"
#include"Euler1.h"

#define SIZE 2

//int main()
//{
//   long long v = 0;
//
//   printf("enter:");
//   scanf_s("%lld", &v);
//
//   printf("%lld\n", square(v));
//
//   return 0;
//}

//Проблема 1
//int main()
//{
//   unsigned int number = 0;
//   printf("number = ");
//   scanf_s("%du", &number);
//
//   unsigned int multiples[SIZE];
//   printf("multiples = ");
//   for (unsigned int i = 0; i < SIZE; ++i)
//      scanf_s("%du", &multiples[i]);
//
//   printf("%llu", Problem_1(number, multiples, SIZE));
//
//   return 0;
//}


//Проблема 2
//int main()
//{
//   unsigned int number = 0;
//   printf("number = ");
//   scanf_s("%du", &number);
//
//   printf("%llu", Problem_2(number));
//
//   return 0;
//}

//Проблема 3
//int main()
//{
//   long long number = 0;
//   printf("number = ");
//   scanf_s("%llu", &number);
//
//   printf("%llu\n", Problem_3(number));
//
//   return 0;
//}


//Проблема 4
//int main()
//{
//
//   printf("%llu\n", Problem_4());
//
//   return 0;
//}

//Проблема 5
int main()
{
   int divider = 0;
   printf("Last divider = ");
   scanf_s("%d", &divider);

   printf("%llu\n", Problem_5(divider));

   return 0;
}