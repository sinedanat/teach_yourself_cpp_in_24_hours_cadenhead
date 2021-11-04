#include <iostream>

int main()
{
    int grade;
    int passing;

    std::cout << "Enter a grade (1-100): ";
    std::cin >> grade;
    std::cout << "Enter the passing grade (1-100): ";
    std::cin >> passing;

    if (grade >= passing)
    {
        std::cout << "\nPass\n";
    }
    else
        std::cout << "\nFail\n";

    return 0;
}

// Enter a grade (1-100): 70
// Enter the passing grade (1-100): 60
// Pass

// Enter a grade (1-100): 60
// Enter the passing grade (1-100): 70
// Fail
