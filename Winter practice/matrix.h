#include "struct.h"

/*
@brief ������ ������� � �������� ����������� ����� � ��������.
@param rows_: ����� �����
@param cols_: ����� ��������
@returns ������� ��������� �������
*/
Matrix* CreateMatrix(const int rows_,const int cols_);

/*
@brief ������� ����� ������� �� ������ ��������, ������ ��������� �������.
@param matrix: �������� �������
@returns ������� ��� ���������� �������
*/
Matrix* CreateNormalMatrix(Matrix* matrix);

/*
@brief ������� ���� �������� ������ � ������� �������� �������.
@param matrix: �������� �������
@param row_: ����� ������, ������� ���������� ������ (������� � 0)
@param column_: ����� �������, ������� ���������� ������ (������� � 0)
@returns ������� ��� ������ ������ � �������
*/
Matrix* MatrixWithoutOneRowAndColumn(Matrix* matrix, const int row_, const int column_);

/*
@brief ������������� �������� �������
@param matrix: �������� �������
@returns ����������������� �������
*/
Matrix* TransMatrix(Matrix* matrix);

/*
@brief ���������� ������� �� �������������� ���������� �������� �������
@param matrix: �������� �������
@returns ������� �� �������������� ���������� �������� �������
*/
Matrix* MatrixWithAlgebAddits(Matrix* matrix);

/*
@brief ��������� �������� �������
@param matrix: �������� �������
@retunrs �������� �������
*/
Matrix* InverseMatrix(Matrix* matrix);

/*
@brief �������� ������� � �������� ������� �� ������� ��������� ������.
@param matrix: �������� �������
@param col_: ����� ������� (������� � 0)
@returns ������� � ��������� �������� �� ������� ��������� ������.
*/
Matrix* MatrixWithFreeElements(Matrix* extendedMatrix,const int col_);