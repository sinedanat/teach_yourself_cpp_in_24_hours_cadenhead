#include <iostream>

int main()
{
    // create a type definition
    typedef unsigned short USHORT;

    // set up width, length and height
    USHORT width = 5;
    USHORT length = 10;
    USHORT height = 7;

    // create an unsigned short initialized with the
    // result of multiplying width by length by height
    USHORT area = width * length * height;

    std::cout << "Width: " << width << "\n";
    std::cout << "Length: " << length << "\n";
    std::cout << "Height: " << height << "\n";
    std::cout << "Area: " << area << "\n";

    return 0;
}