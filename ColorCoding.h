    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
    } ColorPair;
    extern const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    extern const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    extern int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    extern int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
    extern const int MAX_COLORPAIR_NAME_CHARS = 16;
    void ColorPairToString(const ColorPair* , char*);
    ColorPair GetColorFromPairNumber(int);
    int GetPairNumberFromColor(const ColorPair* );
    void testNumberToPair(int ,enum MajorColor ,enum MinorColor );
    void testPairToNumber(enum MajorColor ,enum MinorColor ,int );
    void PrintReferenceManual();
