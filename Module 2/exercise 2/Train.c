#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "functions.h"
#include "Struct.h"
#include "Train.h"
#include <stdlib.h>


void printValidTrains(const char* filename_)
{
   FILE* file;
   fopen_s(&file, filename_, "r");
   if (file == NULL)
   {
      printf("File can't be opened.\n");
      return;
   }

   int maxLines = 0;
   // Считаем количество срок
   while (!feof(file))
   {
      struct Train train;
      if (fscanf(file, "%d %s %s %d %d %d %s %d %d %d %f",
         &train.trainNumber, train.direction, train.departureTime,
         &train.dateDepar.day, &train.dateDepar.month, &train.dateDepar.year,
         train.arrivalTime, &train.dateArriv.day, &train.dateArriv.month,
         &train.dateArriv.year, &train.distance) == 11)
      {
         maxLines++;
      }
   }

   fclose(file);
   

   struct Train* trains = (struct Train*)malloc(maxLines * sizeof(struct Train));// Выделяем память
   if (trains == NULL)
   {
      printf("Memory allocation failed.\n");
      return;
   }
   
   fopen_s(&file, filename_, "r");
   if (file == NULL)
   {
      printf("File can't be opened.\n");
      free(trains); // Освобождаем выделенную память
      return;
   }

   int count = 0;
   // Считываем данные из файла и сохраняем их в структуру
   while (count < maxLines && fscanf(file, "%d %s %s %d %d %d %s %d %d %d %f",
      &trains[count].trainNumber, &trains[count].direction, &trains[count].departureTime,
      &trains[count].dateDepar.day, &trains[count].dateDepar.month, &trains[count].dateDepar.year,
      &trains[count].arrivalTime, &trains[count].dateArriv.day, &trains[count].dateArriv.month,
      &trains[count].dateArriv.year, &trains[count].distance) == 11)
   {
      count++;
   }

   fclose(file);

   // Выводим данные поездов
   for (int i = 0; i < count; i++)
   {
      if ((trains[i].dateDepar.year <= trains[i].dateArriv.year) &&
         ((trains[i].dateDepar.month < trains[i].dateArriv.month) ||
            (trains[i].dateDepar.day < trains[i].dateArriv.day)))
      {
         if (((trains[i].dateArriv.day - trains[i].dateDepar.day) != 1) ||
            ((trains[i].dateArriv.day - trains[i].dateDepar.day) == 1 && my_strcmp(trains[i].departureTime, trains[i].arrivalTime) < 0))
         {
            printf("Train number: %d\n", trains[i].trainNumber);
            printf("Direction: %s\n", trains[i].direction);
            printf("Departure time: %s\n", trains[i].departureTime);
            printf("Date: %d/%d/%d\n", trains[i].dateDepar.day, trains[i].dateDepar.month, trains[i].dateDepar.year);
            printf("Arrival time: %s\n", trains[i].arrivalTime);
            printf("Date: %d/%d/%d\n", trains[i].dateArriv.day, trains[i].dateArriv.month, trains[i].dateArriv.year);
            printf("Distance: %.2f km\n", trains[i].distance);
            printf("\n");
         }
      }
   }
}