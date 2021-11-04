#include <iostream>

int add(int x, int y, int z)
{
    // add the numbers x, y and z together and return the sum
    std::cout << "Running calculator ...\n";

    return (x + y + z);
}

int main()
{
    std::cout << "What is 867 + 5309 + 1300?\n";
    std::cout << "The sum is " << add(867, 5309, 1300) << "\n\n";
    std::cout << "What is 777 + 9311 + 1300?\n";
    std::cout << "The sum is " << add(777, 9311, 1300) << "\n";

    return 0;
}
