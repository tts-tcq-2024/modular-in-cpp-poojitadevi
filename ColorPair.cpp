#include "ColorPair.h"
#include <iostream>
#include <stdexcept>

namespace TelCoColorCoder {

    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    const int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    // Inline getMajor() and getMinor() methods
    inline MajorColor ColorPair::getMajor() const { return majorColor; }
    inline MinorColor ColorPair::getMinor() const { return minorColor; }

    std::string ColorPair::ToString() const {
        return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
    }

    // Refactored PrintColorCodingManual with reduced LOC
    void PrintColorCodingManual() {
        std::cout << "Color Code Manual\n=================" << std::endl;
        for (int majorIndex = 0; majorIndex < numberOfMajorColors; ++majorIndex) {
            for (int minorIndex = 0; minorIndex < numberOfMinorColors; ++minorIndex) {
                int pairNumber = majorIndex * numberOfMinorColors + minorIndex + 1;
                if (pairNumber > 999) throw std::runtime_error("Error: CCN exceeds 3-digit limit.");
                std::cout << "Pair Number: " << pairNumber << " -> " 
                          << ColorPair((MajorColor)majorIndex, (MinorColor)minorIndex).ToString() 
                          << std::endl;
            }
        }
    }

}
