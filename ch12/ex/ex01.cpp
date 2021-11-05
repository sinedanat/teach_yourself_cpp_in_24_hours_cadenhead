// Modify the ReturnPointer program to use references rather than pointers.

#include <iostream>

short factor(int n, int &rSquared, int &rCubed);

int main()
{
    int number, squared, cubed;
    short error;

    std::cout << "Enter a number (0 - 20): ";
    std::cin >> number;

    error = factor(number, squared, cubed);

    if (!error)
    {
        std::cout << "number: " << number << std::endl;
        std::cout << "square: " << squared << std::endl;
        std::cout << "cubed: "  << cubed   << std::endl;
    }
    else
        std::cout << "Error encountered!!\n";

    return 0;
}

short factor(int n, int &rSquared, int &rCubed)
{
    short value = 0;

    if (n > 20)
    {
        value = 1;
    }
    else
    {
        rSquared = n * n;
        rCubed = n * n * n;
        value = 0;
    }

    return value;
}

// Enter a number (0 - 20): 5
// number: 5
// square: 25
// cubed: 125

// Enter a number (0 - 20): -7
// number: -7
// square: 49
// cubed: -343
