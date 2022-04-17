#include <stdio.h>

int GetPairNumberFromColor(const ColorPair* colorPair) {
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}
