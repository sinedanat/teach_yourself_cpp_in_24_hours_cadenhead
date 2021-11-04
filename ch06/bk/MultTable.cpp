#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "\nFirst 10 Multiples of " << number << "\n";

    for (int counter = 1; counter < 11; counter++)
    {
        std::cout << number * counter << " ";
    }

    std::cout << "\n";

    return 0;
}

// Enter a number: 4
// First 10 Multiples of 4
// 4 8 12 16 20 24 28 32 36 40
