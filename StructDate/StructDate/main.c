#include <stdio.h>
#include "structDate.h"


/* ���� ���������, ������� ������ ���� � �����. �������� �������:
	�� ���� ����� ���������� ������� �� �������,
	���������� ���������� ��� ��� ���,
	�� ���� ���� - ������� ���-�� ��������� ���� � ������ ����
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