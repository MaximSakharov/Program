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
         printf("Игрок 1 Загадай 4-х значное число (цифры не должны повторяться) = ");
         scanf_s("%d", &number1);

         system("cls");
      }
   }

   int number3 = 0;
   while (number3 < 1000 || number3>9999)
   {
      while (RepeatingNumbers(number3) == false)
      {
         printf("Игрок 2 Загадай 4-х значное число (цифры не должны повторяться) = ");
         scanf_s("%d", &number3);

         system("cls");
      }
   }

   int number2 = 0;
   int number4 = 0;

   while (TrueBulls(number1, number2) == false && TrueBulls(number3, number4) == false)
   {
      printf("Игрок 2 Отгадай загаданное 4-ч значное число Игрока 1 = ");
      scanf_s("%d", &number2);

      while (number2 < 1000 || number2>9999 || RepeatingNumbers(number2) == false)
      {
         while (RepeatingNumbers(number2) == false)
         {
            printf("Игрок 2 Отгадай загаданное 4-ч значное число Игрока 1(цифры не должны повторяться) = ");
            scanf_s("%d", &number2);
         }
      }

      printf("Быки: %d\n  Коровы: %d\n", NumberOfBulls(number1, number2), NumberOfCows(number1, number2));

      printf("Игрок 1 Отгадай загаданное 4-ч значное число Игрока 2(цифры не должны повторяться) = ");
      scanf_s("%d", &number4);

      while (number4 < 1000 || number2>9999 || RepeatingNumbers(number4) == false)
      {
         while (RepeatingNumbers(number4) == false)
         {
            printf("Игрок 1 Отгадай загаданное 4-ч значное число Игрока 2 = ");
            scanf_s("%d", &number4);
         }
      }

      printf("Быки: %d\n  Коровы: %d\n", NumberOfBulls(number3, number4), NumberOfCows(number3, number4));
   }

   if (TrueBulls(number1, number2) == true)
      printf("Игрок 2, Поздравляю! Ты отгадал число!\n");

   if (TrueBulls(number3, number4) == true)
      printf("Игрок 1, Поздравляю! Ты отгадал число!");

   return 0;
}