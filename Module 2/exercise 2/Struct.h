#pragma once
#include <stdio.h>

struct Date
{
   int day;
   int month;
   int year;
};

struct Train
{
   int trainNumber;
   char direction[50];
   char departureTime[10];
   struct Date dateDepar;
   char arrivalTime[10];
   struct Date dateArriv;
   float distance;
};
