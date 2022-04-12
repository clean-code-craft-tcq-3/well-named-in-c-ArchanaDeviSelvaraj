#include <stdio.h>
#include <assert.h>
#include "ColorPairToString.c"
#include "GetColorFromPairNumber.c"
#include "GetPairNumberFromColor.c"
#include "testNumberToPair.c"
#include "testPairToNumber.c"
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}
