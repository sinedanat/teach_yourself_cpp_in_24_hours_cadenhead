#include <iostream>

class SimpleCat
{
public:
    SimpleCat();
    ~SimpleCat();
private:
    int itsAge;
};

SimpleCat::SimpleCat()
{
    std::cout << "Constructor called\n";
    itsAge = 1;
}

SimpleCat::~SimpleCat()
{
    std::cout << "Destructor called\n";
}

int main()
{
    std::cout << "SimpleCat Frisky ...\n";
    SimpleCat Frisky;

    std::cout << "SimpleCat *pRags = new SimpleCat ...\n";
    SimpleCat * pRags = new SimpleCat;

    std::cout << "delete pRag s ...\n";
    delete pRags;

    std::cout << "Exiting, watch Frisky go ...\n";

    std::cout << "SimpleCat Spooky ...\n";
    SimpleCat Spooky;

    return 0;
}

// SimpleCat Frisky ...
// Constructor called
// SimpleCat *pRags = new SimpleCat ...
// Constructor called
// delete pRag s ...
// Destructor called
// Exiting, watch Frisky go ...
// SimpleCat Spooky ...
// Constructor called
// Destructor called
// Destructor called
