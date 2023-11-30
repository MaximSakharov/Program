#pragma once
#include"stdbool.h"

#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

/*
@brief ��������� ������ ����� �����.
@param value_ : �����.
@return ������ ����� �����.
*/
unsigned int Number1(unsigned const value_);


/*
@brief ��������� ������ ����� �����.
@param value_ : �����.
@return ������ ����� �����.
*/
unsigned int Number2(unsigned const value_);


/*
@brief ��������� ������ ����� �����.
@param value_ : �����.
@return ������ ����� �����.
*/
unsigned int Number3(unsigned const value_);


/*
@brief ��������� �������� ����� �����.
@param value_ : �����.
@return �������� ����� �����.
*/
unsigned int Number4(unsigned const value_);


/*
@brief ���������� ��������� ������������� �����
@return ��������������� ��������� ������������� �����.
*/
int RandomNumber();


/*
@brief ��������� ���-�� ��������� ����� �� ���������� ��������.
@param value1_ : ������ �����.
@param value2_ : ������ �����.
@return .���-�� ��������� ����� �� ���������� ��������.
*/
unsigned int NumberOfBulls(unsigned const value1_, unsigned const value2_);


/*
@brief ��������� ���-�� ��������� ����� �� �� ������ ��������.
@param value1_ : ������ �����.
@param value2_ : ������ �����.
@return .���-�� ��������� ����� �� ������ ��������.
*/
unsigned int NumberOfCows(unsigned const value1_, unsigned const value2_);

/*
@brief ���������� ���������� ���� �����.
@param value_ : �����.
@return ��������� �� ����� �����.
*/
bool NotRepeatingNumbers(unsigned const value_);

#endif //!_FUNCTIONS_H_