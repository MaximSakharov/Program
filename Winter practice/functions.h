#include "struct.h"
/*
@brief ������ ������� � �������� ����������� ����� � ��������.
@param rows_: ����� �����
@param cols_: ����� ��������
@returns ������� ��������� �������
*/
Matrix createMatrix(int rows_, int cols_);

/*
@brief ����������� ������������ ������, ���������� ��� �������
@param matrix: �������, ��� ������� ��������� ���������� ������
*/
void freeMatrix(Matrix matrix);

/*
@brief ������� ���������� �������
@param matrix: ������� ��� ������
*/
void printMatrix(Matrix matrix);

/*
@brief ������� ����� ������� �� ������ ��������, ������ ��������� �������.
@param matrix: �������� �������
@returns ������� ��� ���������� �������
*/
Matrix createNormalMatrix(Matrix matrix);

/*
@brief ������� ����� ������� �� ������ ��������, ������ ��������� �������.
@param matrix: �������� �������
@returns ������� ��� ���������� �������
*/
Matrix extractAndAppendColumns(Matrix matrix);

/*
@brief ��������� ������������ �������.
@param matrix: �������� �������
@param sum_: ����� ���� ����������� ��������� ������� ��� ���������� ����� ������������
@returns �������� ������������ �������
*/
double determinantMatrix(Matrix matrix, double sum_);

/*
@brief ������� ���� �������� ������ � ������� �������� �������.
@param matrix: �������� �������
@param row_: ����� ������, ������� ���������� ������ (������� � 0)
@param column_: ����� �������, ������� ���������� ������ (������� � 0)
@returns ������� ��� ������ ������ � �������
*/
Matrix matrixWithoutOneRowAndColumn(Matrix matrix,int row_, int column_);

/*
@brief ��������� �������������� ���������� �������.
@param matrix: �������� �������
@param row_: ����� ������ (������� � 0)
@param column_: ����� ������� (������� � 0)
@returns �������� ��������������� ����������
*/
double algebraicAddition(Matrix matrix, int row_, int column_);

/*
@brief ������������� �������� �������
@param matrix: �������� �������
@returns ����������������� �������
*/
Matrix transMatrix(Matrix matrix);

/*
@brief ��������� �������� �������
@param matrix: �������� �������
@retunrs �������� �������
*/
Matrix inverseMatrix(Matrix matrix);

/*
@brief �������� ������� � �������� ������� �� ������� ��������� ������.
@param matrix: �������� �������
@param col_: ����� ������� (������� � 0)
@returns ������� � ��������� �������� �� ������� ��������� ������.
*/
Matrix matrixWithFreeElements(Matrix extendedMatrix, int col_);

/*
@brief ��������� �������� ����������� ������ ����
@param extendedMatrix: ����������� ������� ����
*/
void Kramer(Matrix extendedMatrix);