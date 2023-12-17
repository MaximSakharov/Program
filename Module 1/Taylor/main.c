#include <stdio.h>
#include "Taylor.h"
#include "math.h"

int main()
{
   double x = 0;
   double eps = 0;

   printf("Enter exponent argument(x) = ");
   scanf_s("%lf", &x);

   printf("Enter eps = ");
   scanf_s("%lf", &eps);

   printf("%f", Taylor(x, eps));
   
   return 0;
}
