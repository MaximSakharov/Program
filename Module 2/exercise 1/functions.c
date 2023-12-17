#include <stdlib.h>
#include <stdio.h>
#include "functions.h"
#include <string.h>

unsigned int my_strlen(const char* str_)
{
   if (!str_)
      return 0;

   unsigned int len = 0;

   for (; str_[len] != '\0'; ++len);

   return len;
}

void remCharAt(char* str_, int pos_) {
   int len = my_strlen(str_);

   for (int i = pos_; i < len - 1; i++) {
      str_[i] = str_[i + 1];
   }

   str_[len - 1] = '\0';
}

int lastPosOfSymb(const char* str_, char symb_)
{
   int len = my_strlen(str_);
   int pos = -1;

   if (!str_)
      return -1;

   for (int i = len - 1; i >= 0; i--)
   {
      if (symb_ == str_[i])
      {
         pos = i;
         break;
      }
   }

   return pos;
}