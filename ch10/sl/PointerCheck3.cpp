#include <iostream>

int main()
{
    unsigned short int myAge = 5, yourAge = 10;
    unsigned short int *pAge = &myAge;  // a pointer

    std::cout << "myAge:\t" << myAge;
    std::cout << "\t\tyourAge:\t" << yourAge << "\n";
    std::cout << "&myAge:\t" << &myAge;
    std::cout << "\t&yourAge:\t" << &yourAge << "\n";

    std::cout << "pAge:\t" << pAge << "\n";
    std::cout << "*pAge:\t" << *pAge << "\n\n";

    pAge = &yourAge;       // reassign the pointer

    std::cout << "myAge:\t" << myAge;
    std::cout << "\t\tyourAge:\t" << yourAge << "\n";
    std::cout << "&myAge:\t" << &myAge;
    std::cout << "\t&yourAge:\t" << &yourAge << "\n";

    std::cout << "pAge:\t" << pAge << "\n";
    std::cout << "*pAge:\t" << *pAge << "\n\n";

    std::cout << "&pAge:\t" << &pAge << "\n";

    unsigned short int multAge = yourAge * *pAge;
    std::cout << "\nmultAge:\t" << multAge << "\n";

    // new code for the activity begins here
    *pAge = 12;

    std::cout << "\npAge:\t" << pAge << "\n";
    std::cout << "*pAge:\t" << *pAge << "\n\n";

    return 0;
}

// myAge:  5       yourAge:    10
// &myAge: 0x3ff9ae    &yourAge:   0x3ff9ac
// pAge:   0x3ff9ae
// *pAge:  5
// 
// myAge:  5       yourAge:    10
// &myAge: 0x3ff9ae    &yourAge:   0x3ff9ac
// pAge:   0x3ff9ac
// *pAge:  10
// 
// &pAge:  0x3ff9a8
// 
// multAge:    100
// 
// pAge:   0x3ff9ac
// *pAge:  12
