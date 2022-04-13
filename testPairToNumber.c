#include "declare.h"
#include "GetPairNumberFromColor.c"
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    
    typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
    } ColorPair;

    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    
    typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
    } ColorPair;
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
