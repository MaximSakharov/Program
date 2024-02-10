#include <stdbool.h>
#pragma once

/*
* @brief Найти квадрат суммы, введённого количества первых натуральных чисел
* @param number_: Количество первых натуральных чисел
* @return Квадрат суммы введённого количества первых натуральных чисел
*/
double SquareOfTheSum(int number_);

/*
* @brief Найти сумму квадратов, введённого количества первых натуральных чисел
* @param number_: Количество первых натуральных чисел
* @return Сумма квадратов, введённого количества первых натуральных чисел
*/
double SumOfSquares(int number_);

/*
* @brief Определяет является ли число простым
* @param value_: Число
* @return true - простое, false - не простое
*/
bool Is_Prime(unsigned const long long value_);