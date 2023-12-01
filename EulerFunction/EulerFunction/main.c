#include <stdio.h>

int main() 
{
   int number = 0;

   printf("number = ");
   scanf_s("%d", &number);

   printf("%d\n", EulerFunction(number));
}