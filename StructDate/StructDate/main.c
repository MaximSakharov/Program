#include <stdio.h>
#include "structDate.h"


/* Есть структура, которая хранит дату и время. Написать функции:
	по двум датам определяет разницу во времени,
	определяет високосный год или нет,
	на вход дата - выводит кол-во прошедших дней с начала года
*/

int main()
{
	struct Date* date1;

	scanf_s("%d %d %d %d %d", &date1->year, &date1->month, &date1->day, &date1->hour, &date1->minutes);
	//printf("Enter date and time(yy mm dd hh:mm)", &date.year, &date., &date.year, &date.year);

	int year = date1->year;

	if ((year % 4 == 0) || (year % 400 == 0))
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}