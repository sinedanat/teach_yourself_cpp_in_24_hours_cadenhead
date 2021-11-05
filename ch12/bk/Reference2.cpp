#include <iostream>

int main()
{
    int  intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    std::cout << "intOne: " << intOne << "\n";
    std::cout << "rSomeRef: " << rSomeRef << "\n";

    std::cout << "&intOne: "  << &intOne << "\n";
    std::cout << "&rSomeRef: " << &rSomeRef << "\n";

    return 0;
}

// intOne: 5
// rSomeRef: 5
// &intOne: 0x62fd6c
// &rSomeRef: 0x62fd6c
