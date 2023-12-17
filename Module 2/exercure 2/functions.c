#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "functions.h"
#include <stdlib.h>
#include "Struct.h"
#include "stdbool.h"

unsigned int my_strlen(const char* str_)
{
   if (!str_)
      return 0;

   unsigned int len = 0;

   for (; str_[len] != '\0'; ++len);

   return len;
}

int my_strcmp(const char* str1_, const char* str2_)
{

   while (*str1_ && *str2_ && *str1_ == *str2_)
   {
      str1_++;
      str2_++;
   }

   return *str1_ - *str2_;
}