#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <string>

namespace TelCoColorCoder {

    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    extern const int numberOfMajorColors;  // Declare as extern
    extern const int numberOfMinorColors;  // Declare as extern

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor) {}

            inline MajorColor getMajor() const { return majorColor; }
            inline MinorColor getMinor() const { return minorColor; }

            std::string ToString() const;
    };

    void PrintColorCodingManual();
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif
