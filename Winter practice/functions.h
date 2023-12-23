#include "matrix.h"
#include "struct.h"

/*
@brief ��������� ������������ �������.
@param matrix: �������� �������
@param sum_: ����� ���� ����������� ��������� ������� ��� ���������� ����� ������������
@returns �������� ������������ �������
*/
double Determinant(Matrix* matrix, double sum_);

/*
@brief ����������� ������������ ������, ���������� ��� �������
@param matrix: �������, ��� ������� ��������� ���������� ������
*/
void FreeMatrix(Matrix* matrix);

/*
@brief ������� ���������� �������
@param matrix: ������� ��� ������
*/
void PrintMatrix(Matrix* matrix);

/*
@brief ��������� �������������� ���������� �������.
@param matrix: �������� �������
@param row_: ����� ������ (������� � 0)
@param column_: ����� ������� (������� � 0)
@returns �������� ��������������� ����������
*/
double AlgebraicAddition(Matrix* matrix, int row_, int column_);

/*
@brief ��������� �������� ����������� ������ ����
@param extendedMatrix: ����������� ������� ����
*/
void Kramer(Matrix* extendedMatrix);