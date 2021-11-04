// Write a program that asks for a user’s grade from 1 to 100,
// asks what the passing grade is on the same scale,
// and reports whether the user passed.

#include <iostream>

int main()
{
    int grade;
    std::cout << "Enter a grade (1-100): ";
    std::cin >> grade;

    int pass;
    std::cout << "Enter a pass (1-100): ";
    std::cin >> pass;

    if (grade >= pass)
        std::cout << "\nPass\n";
    else
        std::cout << "\nFail\n";

    return 0;
}

// Enter a grade (1-100): 60
// Enter a pass (1-100): 59
// Pass

// Enter a grade (1-100): 60
// Enter a pass (1-100): 61
// Fail
