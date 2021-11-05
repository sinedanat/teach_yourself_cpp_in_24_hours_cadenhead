// Modify the PointerCheck program to multiply
// yourAge and *pAge and store the result in a new variable.
// Display that variable. Think about how the compiler can tell
// the difference between the * operator
// for multiplication and * for dereferencing pAge.

#include <iostream>

int main()
{
    unsigned short int myAge = 5;
    unsigned short int yourAge = 10;
    unsigned short int product = 0; // result
    unsigned short int *pAge = &myAge;  // a pointer

    std::cout << "myAge: " << myAge << std::endl;
    std::cout << "yourAge: " << yourAge << std::endl;
    std::cout << "*pAge: " << *pAge << std::endl;

    product = yourAge * (*pAge);
    std::cout << "product: " << product << std::endl;

    return 0;
}

// myAge: 5
// yourAge: 10
// *pAge: 5
// product: 50
