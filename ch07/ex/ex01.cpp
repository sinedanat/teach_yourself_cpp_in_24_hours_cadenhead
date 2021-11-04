// Write a program that asks a user’s first and last name
// and displays it as part of a sentence greeting the user.

#include <iostream>

int main()
{

    char fisrt_name[50];
    char last_name[50];

    std::cout << "What is your first name? ";
    std::cin.getline(fisrt_name, 49);
    std::cout << "What is your last name? ";
    std::cin.getline(last_name, 49);

    std::cout << "Hello, " << fisrt_name << " " << last_name << "!" << std::endl;

    return 0;
}

// What is your first name? Ed
// What is your last name? Si
// Hello, Ed Si!
