// ColorPair.cpp
#include "ColorPair.h"

namespace TelCoColorCoder {

    // Definition of global variables
    const char* MajorColorNames[] = {
        "White", "Red", "Black", "Yellow", "Violet"
    };

    const char* MinorColorNames[] = {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };

    const int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

}
