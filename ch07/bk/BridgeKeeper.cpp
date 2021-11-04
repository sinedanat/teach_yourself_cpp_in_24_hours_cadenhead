#include <iostream>

int main()
{
    char name[50];
    char quest[80];
    char velocity[80];

    std::cout << "\nWhat is your name? ";
    std::cin.getline(name, 49);

    std::cout << "\nWhat is your quest? ";
    std::cin.getline(quest, 79);

    std::cout << "\nWhat is the velocity of an unladen swallow? ";
    std::cin.getline(velocity, 79);

    std::cout << "\nName: " << name << "\n";
    std::cout << "Quest: " << quest << "\n";
    std::cout << "Velocity: " << velocity << "\n";

    return 0;
}

// What is your name? Ed
// What is your quest? C++
// What is the velocity of an unladen swallow? What?
// Name: Ed
// Quest: C++
// Velocity: What?
