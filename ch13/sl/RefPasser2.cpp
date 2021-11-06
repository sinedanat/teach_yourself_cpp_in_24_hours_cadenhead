#include <iostream>

class SimpleCat
{
public:
    SimpleCat();
    SimpleCat(SimpleCat&);
    ~SimpleCat();

    int GetAge() const
    {
        return itsAge;
    }
    void SetAge(int age)
    {
        itsAge = age;
    }

private:
    int itsAge;
};

SimpleCat::SimpleCat()
{
    std::cout << "Simple Cat Constructor...\n";
    itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&)
{
    std::cout << "Simple Cat Copy Constructor...\n";
}

SimpleCat::~SimpleCat()
{
    std::cout << "Simple Cat Destructor...\n";
}

const SimpleCat & FunctionTwo(const SimpleCat & theCat);

int main()
{
    std::cout << "Making a cat...\n";
    SimpleCat Frisky;
    std::cout << "Frisky is " << Frisky.GetAge()
              << " years old\n";

    int age = 5;
    Frisky.SetAge(age);
    std::cout << "Frisky is " << Frisky.GetAge()
              << " years old\n";

    std::cout << "Calling FunctionTwo...\n";
    std::cout << "Address of Frisky before: " << &Frisky << "\n";
    FunctionTwo(Frisky);
    std::cout << "Address of Frisky after: " << &Frisky << "\n";
    std::cout << "Frisky is " << Frisky.GetAge()
              << " years old\n";
    
    return 0;
}

// functionTwo passes a ref to a const object
const SimpleCat & FunctionTwo(const SimpleCat & theCat)
{
    std::cout << "Function Two. Returning...\n";
    std::cout << "Frisky is now " << theCat.GetAge()
              << " years old \n";
    // theCat.SetAge(8);   const!
    
    return theCat;
}

// Making a cat...
// Simple Cat Constructor...
// Frisky is 1 years old
// Frisky is 5 years old
// Calling FunctionTwo...
// Address of Frisky before: 0x4af7cc
// Function Two. Returning...
// Frisky is now 5 years old 
// Address of Frisky after: 0x4af7cc
// Frisky is 5 years old
// Simple Cat Destructor...
