#include <iostream>

int main()
{
    int grade;
    std::cout << "Enter a grade (1-100): ";
    std::cin >> grade;

    if (grade >= 70)
    {
        if (grade >= 90)
        {
            std::cout << "\nPass with an A grade\n";
            // return 0;
        }

        if (grade >= 80)
        {
            std::cout << "\nPass with a B grade\n";
            // return 0;
        }

        std::cout << "\nPass with a C grade\n";
    }
    else
        std::cout << "\nFail\n";

    return 0;
}

// Enter a grade (1-100): 90
// Pass with an A grade
// Pass with a B grade
// Pass with a C grade
