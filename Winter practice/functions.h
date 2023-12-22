#include "struct.h"
/*
@brief Создаёт матрицу с заданным количеством строк и столбцов.
@param rows_: число строк
@param cols_: число столбцов
@returns Матрицу заданного размера
*/
Matrix createMatrix(int rows_, int cols_);

/*
@brief Освобождает динамическую память, выделенную для матрицы
@param matrix: Матрица, для которой требуется освободить память
*/
void freeMatrix(Matrix matrix);

/*
@brief Выводит содержимое матрицы
@param matrix: Матрица для вывода
*/
void printMatrix(Matrix matrix);

/*
@brief Создает новую матрицу на основе исходной, убирая последний столбец.
@param matrix: Исходная матрица
@returns Матрица без последнего столбца
*/
Matrix createNormalMatrix(Matrix matrix);

/*
@brief Создает новую матрицу на основе исходной, убирая последний столбец.
@param matrix: Исходная матрица
@returns Матрица без последнего столбца
*/
Matrix extractAndAppendColumns(Matrix matrix);

/*
@brief Вычисляет определитель матрицы.
@param matrix: Исходная матрица
@param sum_: Сумма всех необходимых элементов матрицы для вычисления через перестановки
@returns Значение определителя матрицы
*/
double determinantMatrix(Matrix matrix, double sum_);

/*
@brief Убирает одну заданную строку и столбец исходной матрицы.
@param matrix: Исходная матрица
@param row_: Номер строки, которую необходимо убрать (начиная с 0)
@param column_: Номер столбца, который необходимо убрать (начиная с 0)
@returns Матрицу без одного строки и столбца
*/
Matrix matrixWithoutOneRowAndColumn(Matrix matrix,int row_, int column_);

/*
@brief Вычисляет алгебраическое дополнения матрицы.
@param matrix: Исходная матрица
@param row_: Номер строки (начиная с 0)
@param column_: Номер столбца (начиная с 0)
@returns Значение алгебраического дополнения
*/
double algebraicAddition(Matrix matrix, int row_, int column_);

/*
@brief Транспонирует исходную матрицу
@param matrix: Исходная матрица
@returns Транспонированную матрицу
*/
Matrix transMatrix(Matrix matrix);

/*
@brief Вычисляет обратную матрицу
@param matrix: Исходная матрица
@retunrs Обратную матрицу
*/
Matrix inverseMatrix(Matrix matrix);

/*
@brief Заменяет столбец в исходной матрицы на столбец свободных членов.
@param matrix: Исходная матрица
@param col_: Номер столбца (начиная с 0)
@returns Матрицу с заменённым столбцом на столбец свободных членов.
*/
Matrix matrixWithFreeElements(Matrix extendedMatrix, int col_);

/*
@brief Вычисляет значение неизвестных членов СЛАУ
@param extendedMatrix: Расширенная матрица СЛАУ
*/
void Kramer(Matrix extendedMatrix);