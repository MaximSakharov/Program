#include <stdlib.h>
#include <stdio.h>
#include "Strings.h"

unsigned int my_strlen(const char* str_)
{
   if (!str_)
      return 0;

   unsigned int len = 0;

   for (; str_[len] != '\0'; ++len);

   return len;
}

char* my_strcpy(char* dest_, const char* src_)
{
   if (!dest_ || !src_)
      return NULL;

   char* tmp = dest_;

   while (*src_)
   {
      *dest_ = *src_;
      dest_++;
      src_++;
   }
   *dest_ = '\0';

   return tmp;
}

char* my_strcat(char* dest_, const char* src_)
{
   while (*dest_)
      dest_++;

   while (*src_)
   {
      *dest_ = *src_;
      dest_++;
      src_++;
   }
   *dest_ = '\0';

   return dest_;
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

char* my_strstr(const char* str1_, const char* str2_)
{

   while (*str1_)
   {
      const char* str1 = str1_;
      const char* str2 = str2_;
      while (*str1 && *str2 && *str1 == *str2)
      {
         str1++;
         str2++;


         if (!*str2)
            return (char*)str1_;
      }
      
      str1_++;
   }

   return 0;
}

unsigned int fgetline(char* line_, FILE* f_) {
   unsigned int count = 0;
   int c;
   c = fgetc(f_);

   while ( c != EOF && c != '\n') {
      if (line_ != NULL ) {
         line_[count] = (char)c;
         count++;
      }
      c = fgetc(f_);
   }

   if (line_ != NULL && count > 0) {
      line_[count] = '\0'; // добавляем завершающий нулевой символ
   }

   return count;
}