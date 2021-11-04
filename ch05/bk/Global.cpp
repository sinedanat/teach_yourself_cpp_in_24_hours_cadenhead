#include <iostream>

void convert();

float fahrenheit;
float celsius;

int main()
{

    std::cout << "Please enter the temperature in Fahrenheit: ";
    std::cin >> fahrenheit;;
    convert();
    std::cout << "\nHere's the temperature in Celsius: ";
    std::cout << celsius << "\n";

    return 0;
}

// function to convert Fahrenheit to Celsius
void convert()
{
    celsius = ((fahrenheit - 32) * 5) / 9;
}

// Please enter the temperature in Fahrenheit: 50
// Here's the temperature in Celsius: 10
