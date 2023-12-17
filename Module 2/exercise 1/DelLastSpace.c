#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

void dellastspace(char* str_)
{
   char symbol = ' ';

   int pos = lastPosOfSymb(str_, symbol);

   remCharAt(str_, pos);

}