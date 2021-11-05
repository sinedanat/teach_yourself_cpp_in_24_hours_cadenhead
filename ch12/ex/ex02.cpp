// Rewrite the ReferenceSwap program to swap three numbers.

#include <iostream>

void swap(int &rx, int &ry, int &rz);

int main()
{
    int x = 5, y = 10, z = 44;

    std::cout << "Main. Before swap, x: " << x
              << " y: " << y << " z: " << z << std::endl;
    swap(x, y, z);
    std::cout << "Main. After swap, x: " << x
              << " y: " << y << " z: " << z << std::endl;

    return 0;
}

void swap(int &rx, int &ry, int &rz)
{
    int temp;

    std::cout << "Swap. Before swap, rx: " << rx
              << " ry: " << ry << " rz: " << rz << std::endl;

    temp = rx;
    rx = ry;
    ry = temp;

    temp = ry;
    ry = rz;
    rz = temp;

    std::cout << "Swap. After swap, rx: " << rx
              << " ry: " << ry << " rz: " << rz << std::endl;
}

// Main. Before swap, x: 5 y: 10 z: 44
// Swap. Before swap, rx: 5 ry: 10 rz: 44
// Swap. After swap, rx: 10 ry: 44 rz: 5
// Main. After swap, x: 10 y: 44 z: 5
