// Write a program that can calculate the average of numbers
// using an overloaded function named average():
// - two integers,
// - two long integers,
// - two floating-point values.

#include <iostream>

int average(int x, int y);
long average(long x, long y);
float average(float x, float y);

int main()
{
    std::cout << "Average of two integers: "
        << average(10, 20) << std::endl;
    std::cout << "Average of two long integers: "
        << average(10L, 22L) << std::endl;
    std::cout << "Average of two floating-point values: "
        << average(10.2F, 20.4F) << std::endl;

    return 0;
}

int average(int x, int y)
{
    return (x + y) / 2;
}

long average(long x, long y)
{
    return (x + y) / 2;
}

float average(float x, float y)
{
    return (x + y) / 2;
}

// Average of two integers: 15
// Average of two long integers: 16
// Average of two floating-point values: 15.3
