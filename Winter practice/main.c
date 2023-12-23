#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"
#include "matrix.h"

int main()
{
   int choise;
   printf("Select what you want to count:\n \
           1 - Inversed Matrix\n \
           2 - Use Cramer's method\n");
   scanf_s("%d", &choise);

   int rows, cols;
   printf("Enter the number of rows of the matrix: ");
   scanf_s("%d", &rows);
   printf("Enter the number of colomns of the matrix: ");
   scanf_s("%d", &cols);

   Matrix* inputMatrix = CreateMatrix(rows, cols);

   printf("Enter the matrix:\n");
   for (int i = 0, r = 1; i < rows; i++, r++) 
   {
      for (int j = 0; j < cols; j++) 
      {
         scanf_s("%f", &inputMatrix->data[i][j]);
      }
   }

   printf("Original matrix:\n");
   PrintMatrix(inputMatrix);
   printf("\n");
   if (choise == 1)
   {
      printf("Inversed matrix:\n");
      Matrix* invMatrix = InverseMatrix(inputMatrix);

      PrintMatrix(invMatrix);
   }
   if (choise == 2)
      Kramer(inputMatrix);
   else
      return 1;

   FreeMatrix(inputMatrix);

   return 0;
}