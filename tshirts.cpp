#include <string>

std::string classify_tshirt(int size) 
{
    std::string sizeName;
    if (size <= 38) 
    {
        sizeName = "Small";
    }
    else if (size < 42) 
    {
        sizeName = "Medium";
    }
    else 
    {
        sizeName = "Large";
    }
    return sizeName;
}
