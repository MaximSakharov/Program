#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include "Strings.h"
#include <string.h>

int main()
{
   //my_strcpy
   /*char str2[] = "1234";

   unsigned int i = my_strlen(str2);

   char* str1 = malloc((i + 1) * sizeof(char));
   if (!str1)
      return 1;

   my_strcpy(str1, str2);

   printf("String = %s\n", str1);

   free(str1);

   return 0;*/

  /* char str[] = "12345";

   printf("%d\n", my_strlen(str));

   return 0;*/
   
   //my_strcat
   /*char str1[20] = "1234";
   const char str2[] = "5678";

   //unsigned int i = my_strlen(str2);
   //char* dest = malloc((i + 1) * sizeof(char));
   //if (!dest)
   //   return 1;

   char* res = my_strcat(str1, str2);
   res = str1;

   printf("String = %s\n", res);

   //free(dest);
   
   return 0;*/

   //my_strcmp
   /*const char str1[] = "1234";
   const char str2[] = "1238";
   
   printf(" res = %d\n", my_strcmp(str1, str2));

   return 0;*/


   ////my_strstr
   //const char* str1 = "Hello, world! This is a test";
   //const char* str2 = "world";
   //char* res = my_strstr(str1, str2);
   //
   //printf("%s\n", res);

   //if (res != NULL) {
   //   printf("Substring found at index: %d\n", res - str1);
   //}
   //else {
   //   printf("Substring not found\n");
   //}
   //
   //return 0;
   
   FILE* file = fopen("text.txt", "r"); // Открываем файл для чтения

   if (file == NULL) {
      printf("Ошибка открытия файла.\n");
      return 1;
   }

   char line[100];
   unsigned int count = fgetline(line, file);

   printf("%u %s\n", count, line);

   fclose(file); // Закрываем файл

   return 0;
}