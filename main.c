#include <stdio.h>
#include <assert.h>


enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    
    typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
    } ColorPair;
    
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
