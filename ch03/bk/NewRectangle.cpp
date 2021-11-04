#include <iostream>

int main()
{
    // create a type definition
    typedef unsigned short USHORT;

    // set up width and length
    USHORT width = 26;
    USHORT length = 40;

    // create an unsigned short initialized with the
    // result of multiplying width by length
    USHORT area = width * length;

    std::cout << "Width: " << width << "\n";
    std::cout << "Length: " << length << "\n";
    std::cout << "Area: " << area << "\n";

    return 0;
}
