#include <stdio.h>
#include "ColorCoding.h"
void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
sprintf(buffer, "%s %s",MajorColorNames[colorPair->majorColor],MinorColorNames[colorPair->minorColor]);
}
