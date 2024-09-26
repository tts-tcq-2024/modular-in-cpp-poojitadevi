#ifndef COLORPAIR_H
#define COLORPAIR_H

#include <string>

namespace TelCoColorCoder {

    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

    class ColorPair {
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor) {}

            // Inline function definitions
            inline MajorColor getMajor() const { return majorColor; }
            inline MinorColor getMinor() const { return minorColor; }

            std::string ToString() const;
    };

    void PrintColorCodingManual();
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}

#endif
