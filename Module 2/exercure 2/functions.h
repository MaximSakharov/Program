#pragma once
#include "stdbool.h"

/**
* @brief ќтсчитывет количество символов в строке
* @param str_ : —трока
* @return  оличество символов в строке
*/
unsigned int my_strlen(const char* str_);

/*
* @brief —равнивает 2 строки
* @param str1_ : перва€ строка
* @param str2_ : втора€ строка
* @return 0 - равны, положительное число - перва€ строка больше второй, отрицательное число - перва€ строка меньше второй
*/
int my_strcmp(const char* str1_, const char* str2_);