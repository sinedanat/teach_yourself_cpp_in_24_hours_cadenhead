#include <iostream>

auto findArea(auto length, auto width, auto height)
{
    return length * width * height;
}

int main()
{
    auto length = 50.0;
    auto width = 30.0;
    auto height = 3.5;

    auto area = findArea(length, width, height);

    std::cout << "Area: " << area << std::endl;

    return 0;
}

// Area: 5250
