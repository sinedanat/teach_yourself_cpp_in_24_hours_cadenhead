// Further modify PointerCheck to use dereferenced pointer *pAge
// to change the contents of myAge or yourAge.

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

    *pAge = 22;
    std::cout << "myAge: " << myAge << std::endl;

    pAge = &yourAge;
    *pAge = 44;
    std::cout << "yourAge: " << yourAge << std::endl;

    return 0;
}

// myAge: 5
// yourAge: 10
// *pAge: 5
// product: 50
// myAge: 22
// yourAge: 44

