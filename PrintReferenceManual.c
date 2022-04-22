#include "ColorCoding.h"
#include <stdio.h>
void PrintReferenceManual()
{
  maxpairnumber = numberOfMajorColors * numberOfMinorColors;
  for (int pairNumber=1; pairNumber<=maxpairNumber ; pairNumber++)
  {
   const int MAX_COLORPAIR_NAME_CHARS = 16;
   ColorPair colorPair = GetColorFromPairNumber(pairNumber);
   char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
   ColorPairToString(&colorPair, colorPairNames);
   printf("Pair number:%d:%s\n", pairNumber,colorPairNames);
  }
}
