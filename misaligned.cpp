#include <assert.h>
#include <iostream>
#include <vector>
#include <string>

struct ColorPair {
    int index;
    std::string majorColor;
    std::string minorColor;
};

std::vector<ColorPair> generateColorMap() {
    const char* majorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* minorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };
    std::vector<ColorPair> colorMap;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            ColorPair pair;
            pair.index = i * 5 + j;
            pair.majorColor = majorColor[i];
            pair.minorColor = minorColor[j];
            colorMap.push_back(pair);
        }
    }
    return colorMap;
}

// Function to print color map entries
void printColorMap(const std::vector<ColorPair>& colorMap) {
    for (const auto& pair : colorMap) {
        std::cout << pair.index << " | " << pair.majorColor << " | " << pair.minorColor << "\n";
    }
}


int main() {
    const char* expectedMajorColor[] = { "White", "Red", "Black", "Yellow", "Violet" };
    const char* expectedMinorColor[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

    std::vector<ColorPair> colorMap = generateColorMap();
    assert(colorMap.size() == 25);

    // Test all entries
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int index = i * 5 + j;
            assert(colorMap[index].index == index);
            assert(colorMap[index].majorColor == expectedMajorColor[i]);
            assert(colorMap[index].minorColor == expectedMinorColor[j]);
        }
    }

    printColorMap(colorMap);
    std::cout << "All is well (maybe!)\n";
    return 0;
}

