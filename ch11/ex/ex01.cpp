// Add a cat named Spooky to the HeapCreator program.

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
    SimpleCat *pRags = new SimpleCat;

    std::cout << "delete pRag s ...\n";
    delete pRags;

    std::cout << "Exiting, watch Frisky go ...\n";

    std::cout << "SimpleCat Spooky on stack created ...\n";
    SimpleCat Spooky;

    std::cout << "SimpleCat *pSpooky on heap created ...\n";    
    SimpleCat *pSpooky = new SimpleCat;

    std::cout << "SimpleCat *pSpooky on heap deleted ...\n";
    delete pSpooky;

    return 0;
}

// SimpleCat Frisky ...
// Constructor called
// SimpleCat *pRags = new SimpleCat ...
// Constructor called
// delete pRag s ...
// Destructor called
// Exiting, watch Frisky go ...
// SimpleCat Spooky on stack created ...
// Constructor called
// SimpleCat *pSpooky on heap created ...
// Constructor called
// SimpleCat *pSpooky on heap deleted ...
// Destructor called
// Destructor called
// Destructor called
