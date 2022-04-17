#include <assert.h>
#include <stdio.h>
   
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
{
    
   enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
   enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;
ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

