#pragma once
#include "stdbool.h"

/**
* @brief ���������� ���������� �������� � ������
* @param str_ : ������
* @return ���������� �������� � ������
*/
unsigned int my_strlen(const char* str_);

/*
* @brief ���������� 2 ������
* @param str1_ : ������ ������
* @param str2_ : ������ ������
* @return 0 - �����, ������������� ����� - ������ ������ ������ ������, ������������� ����� - ������ ������ ������ ������
*/
int my_strcmp(const char* str1_, const char* str2_);