#include <iostream>

int main()
{
    // set up enumeration
    enum Direction { North, NorthEast, East, SouthEast, South,
                     SouthWest, West, NorthWest
                   };

    // create a variable to hold it
    Direction heading;
    // initialize that variable
    heading = SouthEast;
    std::cout << "Moving " << heading << std::endl;

    return 0;
}
