// Write a program with a square() function that multiplies
// a number by itself and has two auto-typed variables as parameters.
// Call the function multiple times with an int, long, float, and double.
// Store the result of the function in an auto-typed variable and display it.

#include <iostream>

auto square(auto x, auto y)
{
    return x * y;
}

int main()
{

    auto resultInt = square(10, 20);
    std::cout << "Result for int: " << resultInt << std::endl;

    auto resultLong = square(10L, 20L);
    std::cout << "Result for long: " << resultLong << std::endl;

    auto resultFloat = square(10.2F, 20.2F);
    std::cout << "Result for float: " << resultFloat << std::endl;

    auto resultDouble = square(10.2, 20.2);
    std::cout << "Result for double: " << resultDouble << std::endl;

    return 0;
}

// Result for int: 200
// Result for long: 200
// Result for float: 206.04
// Result for double: 206.04
