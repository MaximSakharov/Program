#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"
#include "struct.h"

Matrix createMatrix(int rows_, int cols_) {
   Matrix matrix;
   matrix.rows = rows_;
   matrix.cols = cols_;
   matrix.data = (double**)malloc(rows_ * sizeof(double*));
   for (int i = 0; i < rows_; i++) 
      matrix.data[i] = (double*)malloc(cols_ * sizeof(double));
   return matrix;
}

void freeMatrix(Matrix matrix) {
   for (int i = 0; i < matrix.rows; i++)
      free(matrix.data[i]);
   free(matrix.data);
}

void printMatrix(Matrix matrix) {
   for (int i = 0; i < matrix.rows; i++) 
   {
      for (int j = 0; j < matrix.cols; j++) 
         printf("%f ", matrix.data[i][j]);
      printf("\n");
   }
}

Matrix extractAndAppendColumns(Matrix matrix)
{
   int newCols = matrix.cols + (matrix.cols-1);
   Matrix newMatrix = createMatrix(matrix.rows, newCols);

   for (int i = 0; i < matrix.rows; i++)
   {
      for (int j = 0; j < matrix.cols; j++)
         newMatrix.data[i][j] = matrix.data[i][j];
      for (int j = matrix.cols; j < newCols; j++)
         newMatrix.data[i][j] = matrix.data[i][j - matrix.cols];
   }

   return newMatrix;
}

Matrix matrixWithoutOneRowAndColumn(Matrix matrix, int row_, int column_)
{
   Matrix newMatrix = createMatrix(matrix.rows - 1, matrix.cols - 1);
   int newRow = 0;
   for (int i = 0; i < matrix.rows; i++) {
      if (i == row_) {
         continue;
      }
      int newCol = 0;
      for (int j = 0; j < matrix.cols; j++) {
         if (j == column_) {
            continue;
         }
         newMatrix.data[newRow][newCol] = matrix.data[i][j];
         newCol++;
      }
      newRow++;
   }
   return newMatrix;
}

double determinantMatrix(Matrix matrix, double sum_)
{
   if (matrix.cols > 1) 
   {
      for (int i = 0; i < matrix.cols; i++)
      {
         Matrix newMatrix = matrixWithoutOneRowAndColumn(matrix, 0, i);
         double element = matrix.data[0][i];
         sum_ += pow(-1, i) * element * determinantMatrix(newMatrix, 0);
      }
      return sum_;
   }
   else
      return matrix.data[0][0];
}

Matrix createNormalMatrix(Matrix matrix)
{
   Matrix newMatrix = createMatrix(matrix.rows, matrix.cols - 1);

   for (int i = 0; i < matrix.rows; i++)
      for (int j = 0; j < matrix.cols - 1; j++)
         newMatrix.data[i][j] = matrix.data[i][j];

   return newMatrix;
}

double algebraicAddition(Matrix matrix, int row_, int column_)
{
   Matrix newMatrix = matrixWithoutOneRowAndColumn(matrix, row_, column_);

   double addition = pow(-1, row_ + column_) * determinantMatrix(newMatrix, 0);

   return addition;
}

Matrix transMatrix(Matrix matrix)
{
   Matrix newMatrix = createMatrix(matrix.rows, matrix.cols);

   for (int i = 0; i < matrix.rows; i++)
      for (int j = 0; j < matrix.cols; j++)
         newMatrix.data[j][i] = algebraicAddition(matrix, i, j);

   return newMatrix;
}

Matrix inverseMatrix(Matrix matrix)
{
   Matrix newMatrix = createMatrix(matrix.rows, matrix.cols);
   Matrix trMatrix = transMatrix(matrix);
   double deter = determinantMatrix(matrix, 0);
   for (int i = 0; i < matrix.rows; i++)
      for (int j = 0; j < matrix.cols; j++)
         newMatrix.data[i][j] = (1.0/deter) * trMatrix.data[i][j];

   freeMatrix(trMatrix);
   return newMatrix;
}

Matrix matrixWithFreeElements(Matrix extendedMatrix, int col_)
{
   Matrix newMatrix = createMatrix(extendedMatrix.rows, extendedMatrix.cols - 1);
   
   for (int i = 0; i < extendedMatrix.rows; i++)
      for (int j = 0; j < extendedMatrix.cols - 1; j++)
         newMatrix.data[i][j] = extendedMatrix.data[i][j];

   for (int i = 0; i < extendedMatrix.rows; i++)
      newMatrix.data[i][col_] = extendedMatrix.data[i][extendedMatrix.cols - 1];

   return newMatrix;
}

void Kramer(Matrix extendedMatrix)
{
   Matrix normMatrix = createNormalMatrix(extendedMatrix);
   double deter = determinantMatrix(normMatrix, 0);
   for (int i = 0, n = 1; i < extendedMatrix.cols - 1; i++, n++)
   {
      Matrix newMatrix = matrixWithFreeElements(extendedMatrix, i);
      double variable = determinantMatrix(newMatrix, 0) / deter;
      printf("unknown variable number %d: %lf \n", n, variable);
      freeMatrix(newMatrix);
   }
}