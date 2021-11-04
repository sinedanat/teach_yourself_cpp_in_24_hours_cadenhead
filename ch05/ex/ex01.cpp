// Write a program that converts a temperate
// from Celsius to Fahrenheit.
// The formula to do this is to multiply the Celsius temperate by 9,
// divide the result by 5, and then add 32.

#include <iostream>

float convert(float celsius);

int main()
{
    float celsius;
    float fahrenheit;

    std::cout << "Please enter the temperature in Celsius: ";
    std::cin >> celsius;
    fahrenheit = convert(celsius);
    std::cout << "\nHere's the temperature in Fahrenheit: ";
    std::cout << fahrenheit << "\n";

    return 0;
}

// function to convert Celsius to Fahrenheit
float convert(float celsius)
{
    float fahrenheit = 0;

    fahrenheit = celsius * 9 / 5 + 32;

    return fahrenheit;
}

// Please enter the temperature in Celsius: 10
// Here's the temperature in Fahrenheit: 50
