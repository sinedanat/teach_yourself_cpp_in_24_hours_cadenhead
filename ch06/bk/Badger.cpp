#include <iostream>

int main()
{
    int badger;
    std::cout << "How many badgers? ";
    std::cin >> badger;

    do
    {
        std::cout << "Badger ";
        badger--;
    }
    while (badger > 0);

    std::cout << "\n";

    return 0;
}

// How many badgers? 5
// Badger Badger Badger Badger Badger
