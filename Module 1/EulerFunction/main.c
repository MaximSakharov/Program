#include <stdio.h>
#include"EulerFunction.h"

int main() 
{
   int number = 0;

   printf("number = ");
   scanf_s("%d", &number);

   printf("%llu\n", EulerFunction(number));
}