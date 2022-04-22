#include <stdio.h>
#include "declare.h"
void ColorPairToString(const ColorPair* colorPair, char* buffer) 
{
const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
sprintf(buffer, "%s %s",MajorColorNames[colorPair->majorColor],MinorColorNames[colorPair->minorColor]);
}

