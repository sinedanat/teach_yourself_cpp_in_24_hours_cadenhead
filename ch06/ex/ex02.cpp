// Modify the BadTeacher program so that it handles
// the grades E and G through H, displaying abusive responses
// tailored to such ignorant prattle.

#include <iostream>

int main()
{
    char grade;
    std::cout << "Enter your letter grade (ABCDEFG): ";
    std::cin >> grade;

    switch (grade)
    {
        case 'A':
            std::cout << "Finally!\n";
            break;

        case 'B':
            std::cout << "You can do better!\n";
            break;

        case 'C':
            std::cout << "I'm disappointed in you!\n";
            break;

        case 'D':
            std::cout << "You're not smart!\n";
            break;

        case 'F':
            std::cout << "Get out of my sight!\n";
            break;

        case 'E':
        case 'G':
        case 'H':
            std::cout << "Blah-blah-blah!\n";
            break;

        default:
            std::cout << "That's not even a grade!\n";
            break;
    }

    return 0;
}

// Enter your letter grade (ABCDF): A
// Finally!

// Enter your letter grade (ABCDF): E
// Blah-blah-blah!

// Enter your letter grade (ABCDF): G
// Blah-blah-blah!

// Enter your letter grade (ABCDF): H
// Blah-blah-blah!
