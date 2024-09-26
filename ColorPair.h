// ColorPair.h
#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include <string>

namespace TelCoColorCoder {

    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    // Use extern to declare global variables (not definitions)
    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];

    extern const int numberOfMajorColors;
    extern const int numberOfMinorColors;

    class ColorPair {
    private:
        MajorColor majorColor;
        MinorColor minorColor;
    public:
        ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor) {}

        MajorColor getMajor() {
            return majorColor;
        }

        MinorColor getMinor() {
            return minorColor;
        }

        std::string ToString() {
            std::string colorPairStr = MajorColorNames[majorColor];
            colorPairStr += " ";
            colorPairStr += MinorColorNames[minorColor];
            return colorPairStr;
        }
    };
}

#endif // COLOR_PAIR_H
