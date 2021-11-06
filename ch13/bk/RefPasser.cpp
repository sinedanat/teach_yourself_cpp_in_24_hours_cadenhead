#include <iostream>

class SimpleCat
{
public:
    SimpleCat();
    SimpleCat(SimpleCat&);
    ~SimpleCat();

    int getAge() const
    {
        return itsAge;
    }
    void setAge(int age)
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
    std::cout << "Frisky is " << Frisky.getAge()
              << " years old\n";

    int age = 5;
    Frisky.setAge(age);
    std::cout << "Frisky is " << Frisky.getAge()
              << " years old\n";

    std::cout << "Calling FunctionTwo...\n";
    FunctionTwo(Frisky);
    std::cout << "Frisky is " << Frisky.getAge()
              << " years old\n";
    
    return 0;
}

// functionTwo passes a ref to a const object
const SimpleCat & FunctionTwo(const SimpleCat & theCat)
{
    std::cout << "Function Two. Returning...\n";
    std::cout << "Frisky is now " << theCat.getAge()
              << " years old \n";
    // theCat.setAge(8);   const!
    
    return theCat;
}

// Making a cat...
// Simple Cat Constructor...
// Frisky is 1 years old
// Frisky is 5 years old
// Calling FunctionTwo...
// Function Two. Returning...
// Frisky is now 5 years old 
// Frisky is 5 years old
// Simple Cat Destructor...
