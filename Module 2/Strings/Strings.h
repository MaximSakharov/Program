#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/*
 @brief Считывает строку из файла
 @param line_ : Строка куда считываем
 @param f_ : Файл
 @return Кол-во считываемых символов
*/
unsigned int fgetline(char* line_, FILE* f_);

// STRLEN, STRCPY, STRCAT, STRCMP, STRSTR

/**
* @brief Отсчитывет количество символов в строке
* @param str_ : Строка
* @return Количество символов в строке
*/
unsigned int my_strlen(const char* str_);

/**
* @brief Копирует одну строку в другую
* @param dest_ : конечная строка
* @param src_ : исходная строка
* @return Скопированная строка
*/
char* my_strcpy(char* dest_, const char* src_);


/**
* @brief Приписывает одну к другой
* @param dest_ : конечная строка
* @param src_ : исходная строка
* @return Приписанные строки
*/
char* my_strcat(char* dest_, const char* src_);


/*
* @brief Сравнивает 2 строки
* @param str1_ : первая строка
* @param str2_ : вторая строка
* @return 0 - равны, положительное число - первая строка больше второй, отрицательное число - первая строка меньше второй
*/
int my_strcmp(const char* str1_, const char* str2_);

/*
* @brief Ищет первое вхождение подстроки str2_ в строке str1_
* @param str1_ : первая строка
* @param str2_ : вторая строка
* @return 
*/
char* my_strstr(const char* str1_, const char* str2_);