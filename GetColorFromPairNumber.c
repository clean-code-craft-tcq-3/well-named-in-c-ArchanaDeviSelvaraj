#include <stdio.h>
#include "declare.h"
ColorPair GetColorFromPairNumber(int pairNumber) 
{
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

