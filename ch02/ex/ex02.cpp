// Rewrite the Calculator program to add a third integer
// called z in the add() function and
// call this function with two sets of three numbers.

#include <iostream>

int add(int x, int y, int z)
{
    // add the numbers x and y and z together and return the sum
    std::cout << "Running calculator ...\n";

    return (x + y + z);
}

int main()
{
    /* this program calls an add() function to add two different
       sets of numbers together and display the results. The
       add() function doesn't do anything unless it is called by
       a line in the main() function. */
    std::cout << "What is 867 + 5309 + 10?\n";
    std::cout << "The sum is " << add(867, 5309, 10) << "\n\n";
    std::cout << "What is 777 + 9311 + 100?\n";
    std::cout << "The sum is " << add(777, 9311, 100) << "\n";

    return 0;
}
