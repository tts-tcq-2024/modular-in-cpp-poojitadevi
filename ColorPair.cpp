#include "ColorPair.h"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

namespace TelCoColorCoder {

    const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

    // Define the extern variables here
    const int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
    const int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

    std::string ColorPair::ToString() const {
        return std::string(MajorColorNames[majorColor]) + " " + MinorColorNames[minorColor];
    }

    #include <vector>
#include <string>
#include <stdexcept>

std::vector<std::string> GetColorCodingManual() {
    std::vector<std::string> manual;
    manual.push_back("Color Code Manual\n================="); // First line of the manual
    
    for (int majorIndex = 0; majorIndex < numberOfMajorColors; ++majorIndex) {
        for (int minorIndex = 0; minorIndex < numberOfMinorColors; ++minorIndex) {
            int pairNumber = majorIndex * numberOfMinorColors + minorIndex + 1;
            if (pairNumber > 999) {
                throw std::runtime_error("Error: CCN exceeds 3-digit limit.");
            }
            
            // Format the manual entry string
            std::string entry = "Pair Number: " + std::to_string(pairNumber) + " -> " + 
                                ColorPair((MajorColor)majorIndex, (MinorColor)minorIndex).ToString();
            
            // Add the formatted entry to the vector
            manual.push_back(entry);
        }
    }
    
    return manual; // Return the vector of manual entries
}

}
