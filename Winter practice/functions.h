#include "matrix.h"
#include "struct.h"

/*
@brief Вычисляет определитель матрицы.
@param matrix: Исходная матрица
@param sum_: Сумма всех необходимых элементов матрицы для вычисления через перестановки
@returns Значение определителя матрицы
*/
double Determinant(Matrix* matrix, double sum_);

/*
@brief Освобождает динамическую память, выделенную для матрицы
@param matrix: Матрица, для которой требуется освободить память
*/
void FreeMatrix(Matrix* matrix);

/*
@brief Выводит содержимое матрицы
@param matrix: Матрица для вывода
*/
void PrintMatrix(Matrix* matrix);

/*
@brief Вычисляет алгебраическое дополнения матрицы.
@param matrix: Исходная матрица
@param row_: Номер строки (начиная с 0)
@param column_: Номер столбца (начиная с 0)
@returns Значение алгебраического дополнения
*/
double AlgebraicAddition(Matrix* matrix, int row_, int column_);

/*
@brief Вычисляет значение неизвестных членов СЛАУ
@param extendedMatrix: Расширенная матрица СЛАУ
*/
void Kramer(Matrix* extendedMatrix);