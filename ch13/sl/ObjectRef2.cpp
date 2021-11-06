#include <iostream>

class SimpleCat
{
public:
    SimpleCat();               // constructor
    SimpleCat(SimpleCat&);     // copy constructor
    ~SimpleCat();              // destructor
};

SimpleCat::SimpleCat()
{
    std::cout << "Simple Cat Constructor ...\n";
}

SimpleCat::SimpleCat(SimpleCat&)
{
    std::cout << "Simple Cat Copy Constructor ...\n";
}

SimpleCat::~SimpleCat()
{
    std::cout << "Simple Cat Destructor ...\n";
}

SimpleCat FunctionOne(SimpleCat theCat);
SimpleCat* FunctionTwo(SimpleCat *theCat);

int main()
{
    std::cout << "Making a cat ...\n";
    SimpleCat Frisky;
    std::cout << "Calling FunctionOne ...\n";
    std::cout << "Address of Frisky before: " << &Frisky << "\n";
    FunctionOne(Frisky);
    std::cout << "Address of Frisky after: " << &Frisky << "\n";
    std::cout << "Calling FunctionTwo ...\n";
    std::cout << "Address of Frisky before: " << &Frisky << "\n";
    FunctionTwo(&Frisky);
    std::cout << "Address of Frisky after: " << &Frisky << "\n";

    return 0;
}

// FunctionOne, passes by value
SimpleCat FunctionOne(SimpleCat theCat)
{
    std::cout << "Function One. Returning ...\n";

    return theCat;
}

// functionTwo, passes by reference
SimpleCat* FunctionTwo(SimpleCat *theCat)
{
    std::cout << "Function Two. Returning ...\n";

    return theCat;
}

// Making a cat ...
// Simple Cat Constructor ...
// Calling FunctionOne ...
// Address of Frisky before: 0x2ffbad
// Simple Cat Copy Constructor ...
// Function One. Returning ...
// Simple Cat Copy Constructor ...
// Simple Cat Destructor ...
// Simple Cat Destructor ...
// Address of Frisky after: 0x2ffbad
// Calling FunctionTwo ...
// Address of Frisky before: 0x2ffbad
// Function Two. Returning ...
// Address of Frisky after: 0x2ffbad
// Simple Cat Destructor ...
