// Create a version of the NewGrader program
// that does not include the return statements,
// except for the final one.
// Run it with numerous test values until you spot the bug,
// and then figure out why it’s happening.

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

// Without return statements there is fallthrough flow.

// Enter a grade (1-100): 90
// Pass with an A grade
// Pass with a B grade
// Pass with a C grade

// Enter a grade (1-100): 80
// Pass with a B grade
// Pass with a C grade
