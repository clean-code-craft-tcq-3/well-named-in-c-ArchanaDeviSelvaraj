#include "ColorCoding.h"
#include <stdio.h>
void PrintReferenceManual()
{
  for (int pairNumber=1; pairNumber<=25 ; pairNumber++)
  {
   const int MAX_COLORPAIR_NAME_CHARS = 16;
   ColorPair colorPair = GetColorFromPairNumber(i);
   char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
   ColorPairToString(&colorPair, colorPairNames);
   printf("Pair number:%d:%s\n", pairNumber,colorPairNames);
  }
}
