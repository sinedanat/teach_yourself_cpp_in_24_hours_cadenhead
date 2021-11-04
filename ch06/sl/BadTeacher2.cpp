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

        case 'E':
            std::cout << "Exceptionally poor work!\n";
            break;

        case 'F':
            std::cout << "Get out of my sight!\n";
            break;

        case 'G':
            std::cout << "Worse than I thought possible!\n";
            break;

        default:
            std::cout << "That's not even a grade!\n";
            break;
    }

    return 0;
}

// Enter your letter grade (ABCDEFG): A
// Finally!

// Enter your letter grade (ABCDEFG): E
// Exceptionally poor work!

// Enter your letter grade (ABCDEFG): G
// Worse than I thought possible!

// Enter your letter grade (ABCDEFG): H
// That's not even a grade!
