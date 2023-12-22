#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"
#include "struct.h"


int main() {
   int rows, cols;
   printf("Enter the number of rows of the matrix: ");
   scanf_s("%d", &rows);
   printf("Enter the number of colomns of the matrix: ");
   scanf_s("%d", &cols);

   Matrix inputMatrix = createMatrix(rows, cols);

   printf("Enter the elements of the matrix:\n");
   for (int i = 0, r = 1; i < rows; i++, r++) 
   {
      printf("Elements of %d row:\n", r);
      for (int j = 0, c = 1; j < cols; j++, c++) 
      {
         printf("Element %d: ", c);
         scanf_s("%lf", &inputMatrix.data[i][j]);
      }
   }

   printf("Original matrix:\n");
   printMatrix(inputMatrix);

   //Обратная Матрица
   Matrix invMatrix = inverseMatrix(inputMatrix);

   printMatrix(invMatrix);

   //Вычисление СЛУ по методу Крамера
   //Kramer(inputMatrix);

   freeMatrix(inputMatrix);

   return 0;
}