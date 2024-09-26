#include "ColorPair.h"

namespace TelCoColorCoder {

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

}
