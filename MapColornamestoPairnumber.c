#include "declare.h"
#include <stdio.h>

void MapColornamestoPairnumber()
{
  for (int i=1; i<=25 ; i++)
  {
   const int MAX_COLORPAIR_NAME_CHARS = 16;
   ColorPair colorPair = GetColorFromPairNumber(i);
   char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
   ColorPairToString(&colorPair, colorPairNames);
   printf("Pair number:%d:%s\n", i,colorPairNames);
  }
}
