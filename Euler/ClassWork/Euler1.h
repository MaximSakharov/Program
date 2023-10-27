#pragma once

/*
@brief Найти сумму меньше number_, кратных multiples_
@param number_: Число, меньше которого ищется число
@param multiples_: Массив кратных
@param size_: Размер массива
@return Сумма меньших и кратных
*/
unsigned long long Problem_1(const unsigned int number_,
   const unsigned int* multiples_,
   const unsigned int size_);

/*
@brief Найти сумму всех чётных чисел Фибоначи
@param number_: чиcло из ряда Фибоначи
@return Сумму чётных чисел
*/
unsigned long long Problem_2(const unsigned int number_);

/*
@brief Найти наибольший простой делитель
@param number_: число, которое делим
@return Наибольший простой делитель
*/
unsigned long long Problem_3(long long number_);

/*
@brief Найти самое большое число-палиндром, полученное умножением двух трёхзначных чисел
@return самое большое число-палиндром, полученное умножением двух трёхзначных чисел
*/
unsigned long long Problem_4();

/*
@brief Найти самое маленькое число, которое делится нацело на все числа от 1 до 20
@return Самое маленькое число, которое делится нацело на все числа от 1 до 20
*/
unsigned long long Problem_5();