#include <iostream>

int main()
{
    char firstName[40];
    char lastName[40];

    std::cout << "Enter your first name: ";
    std::cin >> firstName;
    std::cout << "\nEnter your last name: ";
    std::cin >> lastName;
    std::cout << "\n";

    std::cout << "Hello, " << firstName << " " << lastName << "!";
    std::cout << " You look great. Have you lost weight?\n";

    return 0;
}

// Enter your first name: Ed
// Enter your last name: Si
// Hello, Ed Si! You look great. Have you lost weight?
