#include <stdio.h>
#include"functions.h"
#include"stdbool.h"
#include "math.h"
#include"Bulls and Cows.h"
#include <locale.h>
#include <time.h>

void BullsAndCows()
{
   setlocale(LC_ALL, "Rus");
   srand(time(NULL));

   int SecretNumber = RandomNumber();

   for (; NotRepeatingNumbers(SecretNumber) == false; SecretNumber = RandomNumber());

   int PlayerNumber = 0;

   while (NumberOfBulls(SecretNumber, PlayerNumber) != 4)
   {
      printf("Угадайте загаданное четырёхзначное число (числа не должны повторяться!) = ");
      scanf_s("%d", &PlayerNumber);

      if (NotRepeatingNumbers(PlayerNumber)==false || PlayerNumber < 1000 || PlayerNumber > 9999)
         while (NotRepeatingNumbers(PlayerNumber) == false || PlayerNumber < 1000 || PlayerNumber > 9999)
         {
            printf("Угадайте загаданное четырёхзначное число (числа не должны повторяться!) = ");
            scanf_s("%d", &PlayerNumber);
         }
     
      printf("Быки: %d Коровы: %d \n", NumberOfBulls(SecretNumber, PlayerNumber), NumberOfCows(SecretNumber, PlayerNumber));
   }

   if (NumberOfBulls(SecretNumber, PlayerNumber) == 4)
      printf("Поздравляю, ты отгадал число %d!", SecretNumber);
}