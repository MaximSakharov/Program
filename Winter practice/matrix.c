#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"
#include "matrix.h"
#include "struct.h"

Matrix* CreateMatrix(const int rows_, const int cols_)
{
   Matrix* matrix = malloc(sizeof(Matrix));
   if (!matrix)
      return NULL;

   matrix->rows = rows_;
   matrix->cols = cols_;
   matrix->data = calloc(rows_, sizeof(float*));

   if (matrix->data == NULL)
   {
      free(matrix);
      return NULL;
   }

   for (int i = 0; i < rows_; i++)
   {
      matrix->data[i] = calloc(cols_, sizeof(float));
      if (!matrix->data[i])
      {
         free(matrix->data);
         free(matrix);
         return NULL;
      }
   }

   return matrix;
}

Matrix* MatrixWithoutOneRowAndColumn(Matrix* matrix, const int row_, const int column_)
{
   Matrix* newMatrix = CreateMatrix(matrix->rows - 1, matrix->cols - 1);
   int newRow = 0;
   for (int i = 0; i < matrix->rows; i++)
   {
      if (i == row_)
         continue;

      int newCol = 0;
      for (int j = 0; j < matrix->cols; j++)
      {
         if (j == column_)
            continue;

         newMatrix->data[newRow][newCol] = matrix->data[i][j];
         newCol++;
      }
      newRow++;
   }
   return newMatrix;
}

Matrix* CreateNormalMatrix(Matrix* matrix)
{
   Matrix* newMatrix = CreateMatrix(matrix->rows, matrix->cols - 1);

   for (int i = 0; i < matrix->rows; i++)
      for (int j = 0; j < matrix->cols - 1; j++)
         newMatrix->data[i][j] = matrix->data[i][j];

   return newMatrix;
}

Matrix* TransMatrix(Matrix* matrix)
{
   Matrix* newMatrix = CreateMatrix(matrix->rows, matrix->cols);

   for (int i = 0; i < matrix->rows; i++)
      for (int j = 0; j < matrix->cols; j++)
         newMatrix->data[j][i] = matrix->data[i][j];

   return newMatrix;
}

Matrix* MatrixWithAlgebAddits(Matrix* matrix)
{
   Matrix* newMatrix = CreateMatrix(matrix->rows, matrix->cols);

   for (int i = 0; i < matrix->rows; i++)
      for (int j = 0; j < matrix->cols; j++)
         newMatrix->data[i][j] = AlgebraicAddition(matrix, i, j);

   return newMatrix;
}

Matrix* InverseMatrix(Matrix* matrix)
{
   Matrix* newMatrix = CreateMatrix(matrix->rows, matrix->cols);
   Matrix* AlMatrix = MatrixWithAlgebAddits(matrix);
   Matrix* trMatrix = TransMatrix(AlMatrix);
   double deter = Determinant(matrix, 0);
   for (int i = 0; i < matrix->rows; i++)
      for (int j = 0; j < matrix->cols; j++)
         newMatrix->data[i][j] = (1.0 / deter) * trMatrix->data[i][j];

   FreeMatrix(trMatrix);
   FreeMatrix(AlMatrix);
   return newMatrix;
}

Matrix* MatrixWithFreeElements(Matrix* extendedMatrix, const int col_)
{
   Matrix* newMatrix = CreateMatrix(extendedMatrix->rows, extendedMatrix->cols - 1);

   for (int i = 0; i < extendedMatrix->rows; i++)
      for (int j = 0; j < extendedMatrix->cols - 1; j++)
         newMatrix->data[i][j] = extendedMatrix->data[i][j];

   for (int i = 0; i < extendedMatrix->rows; i++)
      newMatrix->data[i][col_] = extendedMatrix->data[i][extendedMatrix->cols - 1];

   return newMatrix;
}