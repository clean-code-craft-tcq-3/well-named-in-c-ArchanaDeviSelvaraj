#include <stdio.h>
//#include "GetColorFromPairNumber.c"

void ColorPairToString(const ColorPair* ColorPair, char* buffer) {
    sprintf(buffer, "%s %s",MajorColorNames[ColorPair->majorColor],MinorColorNames[ColorPair->minorColor]);
}
