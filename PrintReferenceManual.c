#include "ColorCoding.h"
#include <stdio.h>
void PrintReferenceManual()
{
  const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
  const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
  int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
  int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
  int maxpairnumber = numberOfMajorColors * numberOfMinorColors;
  for (int pairNumber=1; pairNumber<=maxpairNumber; pairNumber++)
  {
   const int MAX_COLORPAIR_NAME_CHARS = 16;
   ColorPair colorPair = GetColorFromPairNumber(pairNumber);
   char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
   ColorPairToString(&colorPair, colorPairNames);
   printf("Pair number:%d:%s\n", pairNumber,colorPairNames);
  }
}
