#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*
 @brief ��������� ������ �� �����
 @param line_ : ������ ���� ���������
 @param f_ : ����
 @return ���-�� ����������� ��������
*/
unsigned int fgetline(char* line_, FILE* f_);

// STRLEN, STRCPY, STRCAT, STRCMP, STRSTR

/**
* @brief ���������� ���������� �������� � ������
* @param str_ : ������
* @return ���������� �������� � ������
*/
unsigned int my_strlen(const char* str_);

/**
* @brief �������� ���� ������ � ������
* @param dest_ : �������� ������
* @param src_ : �������� ������
* @return ������������� ������
*/
char* my_strcpy(char* dest_, const char* src_);


/**
* @brief ����������� ���� � ������
* @param dest_ : �������� ������
* @param src_ : �������� ������
* @return ����������� ������
*/
char* my_strcat(char* dest_, const char* src_);


/*
* @brief ���������� 2 ������
* @param str1_ : ������ ������
* @param str2_ : ������ ������
* @return 0 - �����, ������������� ����� - ������ ������ ������ ������, ������������� ����� - ������ ������ ������ ������
*/
int my_strcmp(const char* str1_, const char* str2_);

/*
* @brief ���� ������ ��������� ��������� str2_ � ������ str1_
* @param str1_ : ������ ������
* @param str2_ : ������ ������
* @return 
*/
char* my_strstr(const char* str1_, const char* str2_);