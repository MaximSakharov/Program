#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "functions.h"

int main() {
   char str[] = "Hello wo rld!";

   dellastspace(str);

   printf("%s\n", str);
   
   return 0;
}