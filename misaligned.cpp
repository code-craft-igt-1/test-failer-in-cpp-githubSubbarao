#include <vector>
#include <string>
#include <iostream>

    std::vector<std::string> getColorMap() {
        return {
            "0 | White",
            "1 | Red",
            "2 | Black",
            "3 | Yellow",
            "4 | Violet"
        };
    }

    void printColorMap() {
        for (const auto& color : getColorMap()) {
            std::cout << color << std::endl;
        }
    }
