#include <stdio.h>
#include"functions.h"
#include"stdbool.h"
#include "math.h"
#include"Bulls and Cows.h"
#include <locale.h>

unsigned int BullsAndCows()
{
   setlocale(LC_ALL, "Rus");

   int number1 = 0;
   while (number1 < 1000 || number1>9999)
   {
      while (RepeatingNumbers(number1) == false)
      {
         printf("����� 1 ������� 4-� ������� ����� (����� �� ������ �����������) = ");
         scanf_s("%d", &number1);

         system("cls");
      }
   }

   int number3 = 0;
   while (number3 < 1000 || number3>9999)
   {
      while (RepeatingNumbers(number3) == false)
      {
         printf("����� 2 ������� 4-� ������� ����� (����� �� ������ �����������) = ");
         scanf_s("%d", &number3);

         system("cls");
      }
   }

   int number2 = 0;
   int number4 = 0;

   while (TrueBulls(number1, number2) == false && TrueBulls(number3, number4) == false)
   {
      printf("����� 2 ������� ���������� 4-� ������� ����� ������ 1 = ");
      scanf_s("%d", &number2);

      while (number2 < 1000 || number2>9999 || RepeatingNumbers(number2) == false)
      {
         while (RepeatingNumbers(number2) == false)
         {
            printf("����� 2 ������� ���������� 4-� ������� ����� ������ 1(����� �� ������ �����������) = ");
            scanf_s("%d", &number2);
         }
      }

      printf("����: %d\n  ������: %d\n", NumberOfBulls(number1, number2), NumberOfCows(number1, number2));

      printf("����� 1 ������� ���������� 4-� ������� ����� ������ 2(����� �� ������ �����������) = ");
      scanf_s("%d", &number4);

      while (number4 < 1000 || number2>9999 || RepeatingNumbers(number4) == false)
      {
         while (RepeatingNumbers(number4) == false)
         {
            printf("����� 1 ������� ���������� 4-� ������� ����� ������ 2 = ");
            scanf_s("%d", &number4);
         }
      }

      printf("����: %d\n  ������: %d\n", NumberOfBulls(number3, number4), NumberOfCows(number3, number4));
   }

   if (TrueBulls(number1, number2) == true)
      printf("����� 2, ����������! �� ������� �����!\n");

   if (TrueBulls(number3, number4) == true)
      printf("����� 1, ����������! �� ������� �����!");

   return 0;
}