#include <iostream>

int average(int value1, int value2); // function prototype
long average(long value1, long value2); // function prototype
float average(float value1, float value2); // function prototype

int main()
{

    int i1 = 17;
    int i2 = 19;
    std::cout << "Average of two integers: " << average(i1, i2) << "\n";

    long l1 = 25;
    long l2 = 29;
    std::cout << "Average of two longs: " << average(l1, l2) << "\n";

    float f1 = 2.5;
    float f2 = 12.5;
    std::cout << "Average of two floats: " << average(f1, f2) << "\n";

    return 0;
}

// function definition
int average(int value1, int value2)
{
    return (value1 + value2) / 2;
}

// function definition
long average(long value1, long value2)
{
    return (value1 + value2) / 2;
}

// function definition
float average(float value1, float value2)
{
    return (value1 + value2) / 2;
}

// Average of two integers: 18
// Average of two longs: 27
// Average of two floats: 7.5
