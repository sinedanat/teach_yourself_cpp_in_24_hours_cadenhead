#include <iostream>

float convert(float);

int main()
{
    float fahrenheit;
    float celsius;

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
    float fahrenheit;

    fahrenheit = celsius * 9 / 5 + 32;

    return fahrenheit;
}

// Please enter the temperature in Celsius: 10
// Here's the temperature in Fahrenheit: 50
