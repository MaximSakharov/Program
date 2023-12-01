#include <stdio.h>
#include "Taylor.h"
#include "math.h"

int main()
{
   
   double x = 0;
   double n = 0;
   int precision = 0;

   printf("Enter exponent argument(x) = ");
   scanf_s("%lf", &x);

   printf("Enter degree of accuracy(n) = ");
   scanf_s("%lf", &n);

   printf("Enter precision (number of decimal places) = ");
   scanf_s("%d", &precision);

   printf("%.*lf\n", precision, Taylor(x, n));
   
   return 0;
}
