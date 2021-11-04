// Expand the Rectangle program so that it determines
// the area of a three-dimensional rectangle
// that has width, length, and height.
// To determine the area, use the multiplication
// operator * to multiply all three values.

#include <iostream>

int main()
{
    // create a type definition
    typedef unsigned short USHORT;

    // set up width and length
    USHORT width = 5;
    USHORT length = 10;
    USHORT height = 4;

    // create an unsigned short initialized with the
    // result of multiplying width by length
    USHORT volume = width * length * height;

    std::cout << "Width: " << width << "\n";
    std::cout << "Length: " << length << "\n";
    std::cout << "Height: " << height << "\n";
    std::cout << "Volume: " << volume << "\n";

    return 0;
}
