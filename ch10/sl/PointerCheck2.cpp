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

    // new code for the activity begins here
    unsigned short int multAge = yourAge * *pAge;
    std::cout << "\nmultAge:\t" << multAge << "\n";

    return 0;
}

// myAge:  5       yourAge:    10
// &myAge: 0x53fbae    &yourAge:   0x53fbac
// pAge:   0x53fbae
// *pAge:  5
// 
// myAge:  5       yourAge:    10
// &myAge: 0x53fbae    &yourAge:   0x53fbac
// pAge:   0x53fbac
// *pAge:  10
// 
// &pAge:  0x53fba8
// 
// multAge:    100
