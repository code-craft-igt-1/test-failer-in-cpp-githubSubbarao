#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> get_color_map() {
    return {
        "0 | White",
        "1 | Red",
        "2 | Black",
        "3 | Yellow",
        "4 | Violet"
    };
}

void print_color_map() {
    for (const auto& color : get_color_map()) {
        std::cout << color << std::endl;
    }
}