#include "declare.h"
void MapColornamesPairnumber()
{
  for (int i=1; i<=25 ; i++)
  {
    for (int j=1; j<=5 ; j++)
    {
      for (int k=1; k<=5 ; k++)
    testNumberToPair(i, MajorColor[j], MinorColor[k]);
    }
  }
}
