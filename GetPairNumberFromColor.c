#include <stdio.h>
#include "declare.h"

int GetPairNumberFromColor(const ColorPair* colorPair) {
const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
 return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}
