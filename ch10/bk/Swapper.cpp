#include <iostream>

int main()
{
    int value1 = 12500;
    int value2 = 1700;
    int *pointer2 = nullptr;

    // give pointer the address of value2
    pointer2 = &value2;
    // dereference the pointer and assign to value1
    value1 = *pointer2;
    pointer2 = nullptr;

    std::cout << "value1 = " << value1 << "\n";

    return 0;
}

// value1 = 1700
