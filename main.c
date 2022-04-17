#include <stdio.h>
#include <assert.h>


    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    
    typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
    } ColorPair;
    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    const int MAX_COLORPAIR_NAME_CHARS = 16;
   
    
    void ColorPairToString(const ColorPair* , char*);
    ColorPair GetColorFromPairNumber(int);
    int GetPairNumberFromColor(const ColorPair* );
    void testNumberToPair(int ,enum MajorColor ,enum MinorColor );
    void testPairToNumber(enum MajorColor ,enum MinorColor ,int );


int main() {

    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}
