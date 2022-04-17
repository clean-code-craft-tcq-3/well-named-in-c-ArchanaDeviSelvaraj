#include <stdio.h>
#include "declare.h"

int GetPairNumberFromColor(const ColorPair* colorPair) {
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
 return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}
