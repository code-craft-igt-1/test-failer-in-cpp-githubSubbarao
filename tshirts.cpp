#include <string>

std::string classify_tshirt(int size) {
    if (size <= 38) {
        return "Small";
    } else if (size > 38 && size < 42) {
        return "Medium";
    } else if (size > = 42) {
        return "Large";
    } 
}