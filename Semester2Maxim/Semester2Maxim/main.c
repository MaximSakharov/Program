#include <stdio.h>
#include <math.h>
#include "functions.h"
#include "Euler.h"

/* Есть структура, которая хранит дату и время. Написать функции: 
	по двум датам определяет разницу во времени,
	определяет високосный год или нет,
	на вход дата - выводит кол-во прошедших дней с начала года
*/
int main()
{
	int number = 0;

	printf("Enter the number ");
	scanf_s("%d", &number);

	//printf("The difference between the sum of the squares of the first ten natural numbers and the square of the sum is %f\n", Problem_6(number));

	printf("The %d prime number is %d", number, Problem_7(number));

	return 0;
}