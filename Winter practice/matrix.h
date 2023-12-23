#include "struct.h"

/*
@brief Создаёт матрицу с заданным количеством строк и столбцов.
@param rows_: число строк
@param cols_: число столбцов
@returns Матрицу заданного размера
*/
Matrix* CreateMatrix(const int rows_,const int cols_);

/*
@brief Создает новую матрицу на основе исходной, убирая последний столбец.
@param matrix: Исходная матрица
@returns Матрица без последнего столбца
*/
Matrix* CreateNormalMatrix(Matrix* matrix);

/*
@brief Убирает одну заданную строку и столбец исходной матрицы.
@param matrix: Исходная матрица
@param row_: Номер строки, которую необходимо убрать (начиная с 0)
@param column_: Номер столбца, который необходимо убрать (начиная с 0)
@returns Матрицу без одного строки и столбца
*/
Matrix* MatrixWithoutOneRowAndColumn(Matrix* matrix, const int row_, const int column_);

/*
@brief Транспонирует исходную матрицу
@param matrix: Исходная матрица
@returns Транспонированную матрицу
*/
Matrix* TransMatrix(Matrix* matrix);

/*
@brief Записывает матрицу из алгебраических дополнений исходной матрицы
@param matrix: Исходная матрица
@returns Матрицу из алгебраических дополнений исходной матрицы
*/
Matrix* MatrixWithAlgebAddits(Matrix* matrix);

/*
@brief Вычисляет обратную матрицу
@param matrix: Исходная матрица
@retunrs Обратную матрицу
*/
Matrix* InverseMatrix(Matrix* matrix);

/*
@brief Заменяет столбец в исходной матрицы на столбец свободных членов.
@param matrix: Исходная матрица
@param col_: Номер столбца (начиная с 0)
@returns Матрицу с заменённым столбцом на столбец свободных членов.
*/
Matrix* MatrixWithFreeElements(Matrix* extendedMatrix,const int col_);