#include <iostream>

int main()
{
    int myAge;            // a variable
    int *pAge = nullptr;     // a pointer

    myAge = 5;
    pAge = &myAge;     // assign address of myAge to pAge
    std::cout << "myAge: " << myAge << "\n";
    std::cout << "*pAge: " << *pAge << "\n\n";

    std::cout << "*pAge = 7\n";
    *pAge = 7;         // sets myAge to 7
    std::cout << "*pAge: " << *pAge << "\n";
    std::cout << "myAge: " << myAge << "\n\n";

    std::cout << "myAge = 9\n";
    myAge = 9;
    std::cout << "myAge: " << myAge << "\n";
    std::cout << "*pAge: " << *pAge << "\n";

    return 0;
}

// myAge: 5
// *pAge: 5
// 
// *pAge = 7
// *pAge: 7
// myAge: 7
// 
// myAge = 9
// myAge: 9
// *pAge: 9
