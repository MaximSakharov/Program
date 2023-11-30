#pragma once
#include"stdbool.h"

#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

/*
@brief Вычисляет первую цифру числа.
@param value_ : Число.
@return Первая цифра числа.
*/
unsigned int Number1(unsigned const value_);


/*
@brief Вычисляет вторую цифру числа.
@param value_ : Число.
@return Вторая цифра числа.
*/
unsigned int Number2(unsigned const value_);


/*
@brief Вычисляет третью цифру числа.
@param value_ : Число.
@return Третья цифра числа.
*/
unsigned int Number3(unsigned const value_);


/*
@brief Вычисляет четвёртую цифру числа.
@param value_ : Число.
@return Четвёртая цифра числа.
*/
unsigned int Number4(unsigned const value_);


/*
@brief Генерирует случайное четырёхзначное число
@return Сгенерированное случайное четырёхзначное число.
*/
int RandomNumber();


/*
@brief Вычисляет кол-во совпавших чисел на одинаковых позициях.
@param value1_ : Первое число.
@param value2_ : Второе число.
@return .Кол-во совпавших чисел на одинаковых позициях.
*/
unsigned int NumberOfBulls(unsigned const value1_, unsigned const value2_);


/*
@brief Вычисляет кол-во совпавших чисел не на разных позициях.
@param value1_ : Первое число.
@param value2_ : Второе число.
@return .Кол-во совпавших чисел на разных позициях.
*/
unsigned int NumberOfCows(unsigned const value1_, unsigned const value2_);

/*
@brief Определяет совпадения цифр числа.
@param value_ : Число.
@return Совпадают ли цифры числа.
*/
bool NotRepeatingNumbers(unsigned const value_);

#endif //!_FUNCTIONS_H_