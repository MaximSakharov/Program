#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"
#include "matrix.h"
#include "struct.h"

double Determinant(Matrix* matrix, double sum_)
{
   if (matrix->cols > 1)
   {
      for (int i = 0; i < matrix->cols; i++)
      {
         Matrix* newMatrix = MatrixWithoutOneRowAndColumn(matrix, 0, i);
         double element = matrix->data[0][i];
         sum_ += pow(-1, i) * element * Determinant(newMatrix, 0);
      }
      return sum_;
   }
   else
      return matrix->data[0][0];
}

void FreeMatrix(Matrix* matrix) 
{
   for (int i = 0; i < matrix->rows; i++)
      free(matrix->data[i]);
   free(matrix->data);
}

void PrintMatrix(Matrix* matrix) 
{
   for (int i = 0; i < matrix->rows; i++)
   {
      for (int j = 0; j < matrix->cols; j++)
         printf("%f ", matrix->data[i][j]);
      printf("\n");
   }
}

double AlgebraicAddition(Matrix* matrix, int row_, int column_)
{
   Matrix* newMatrix = MatrixWithoutOneRowAndColumn(matrix, row_, column_);

   double addition = pow(-1, row_ + column_) * Determinant(newMatrix, 0);

   return addition;
}

void Kramer(Matrix* extendedMatrix)
{
   Matrix* normMatrix = CreateNormalMatrix(extendedMatrix);
   double deter = Determinant(normMatrix, 0);
   for (int i = 0, n = 1; i < extendedMatrix->cols - 1; i++, n++)
   {
      Matrix* newMatrix = MatrixWithFreeElements(extendedMatrix, i);
      double variable = Determinant(newMatrix, 0) / deter;
      printf("unknown variable number %d: %lf \n", n, variable);
      FreeMatrix(newMatrix);
   }
}