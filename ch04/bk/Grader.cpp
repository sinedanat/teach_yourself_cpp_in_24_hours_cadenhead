#include <iostream>

int main()
{
    int grade;
    std::cout << "Enter a grade (1-100): ";
    std::cin >> grade;

    if (grade >= 70)
        std::cout << "\nPass\n";
    else
        std::cout << "\nFail\n";

    return 0;
}
