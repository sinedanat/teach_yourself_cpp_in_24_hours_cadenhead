#include <iostream>

void swap(int &x, int &y);

int main()
{
    int x = 5, y = 10;

    std::cout << "Main. Before swap, x: " << x
              << " y: " << y << "\n";
    swap(x, y);
    std::cout << "Main. After swap, x: " << x
              << " y: " << y << "\n";

    return 0;
}

void swap(int &rx, int &ry)
{
    int temp;

    std::cout << "Swap. Before swap, rx: " << rx
              << " ry: " << ry << "\n";

    temp = rx;
    rx = ry;
    ry = temp;

    std::cout << "Swap. After swap, rx: " << rx
              << " ry: " << ry << "\n";
}

// Main. Before swap, x: 5 y: 10
// Swap. Before swap, rx: 5 ry: 10
// Swap. After swap, rx: 10 ry: 5
// Main. After swap, x: 10 y: 5
