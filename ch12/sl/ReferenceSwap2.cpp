#include <iostream>

void swap(int &x, int &y, int &z);

int main()
{
    int x = 5, y = 10, z = 13;

    std::cout << "Main. Before swap, x: " << x
              << " y: " << y << " z: " << z << "\n";
    swap(x, y, z);
    std::cout << "Main. After swap, x: " << x
              << " y: " << y << " z: " << z << "\n";
    return 0;
}

void swap(int &rx, int &ry, int &rz)
{
    int temp;

    std::cout << "Swap. Before swap, rx: " << rx
              << " ry: " << ry << " rz: " << rz << "\n";

    temp = rx;
    rx = ry;
    ry = rz;
    rz = temp;

    std::cout << "Swap. After swap, rx: " << rx
              << " ry: " << ry << " rz: " << rz << "\n";
}

// Main. Before swap, x: 5 y: 10 z: 13
// Swap. Before swap, rx: 5 ry: 10 rz: 13
// Swap. After swap, rx: 10 ry: 13 rz: 5
// Main. After swap, x: 10 y: 13 z: 5
