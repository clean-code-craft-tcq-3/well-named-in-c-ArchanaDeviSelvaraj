#include "declare.h>
void MapColornamesPairnumber()
{
  const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
  const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
  for (int i=1; i<=25 ; i++)
  {
    for (int j=1; j<=5 ; j++)
    {
      for (int k=1; k<=5 ; k++)
    testNumberToPair(i, MajorColorNames[j], MinorColorNames[k]);
    }
  }
}
