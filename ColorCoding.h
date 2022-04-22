    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};
    typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
    } ColorPair;
    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];
    extern int numberOfMajorColors;
    extern int numberOfMinorColors;
    extern const int MAX_COLORPAIR_NAME_CHARS;
    void ColorPairToString(const ColorPair* , char*);
    ColorPair GetColorFromPairNumber(int);
    int GetPairNumberFromColor(const ColorPair* );
    void testNumberToPair(int ,enum MajorColor ,enum MinorColor );
    void testPairToNumber(enum MajorColor ,enum MinorColor ,int );
    void PrintReferenceManual();
