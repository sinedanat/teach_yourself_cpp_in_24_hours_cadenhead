#include <iostream>

class SimpleCat
{
public:
    SimpleCat(int age, int weight);
    ~SimpleCat() {}
    int getAge()
    {
        return itsAge;
    }
    int getWeight()
    {
        return itsWeight;
    }

private:
    int itsAge;
    int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight):
    itsAge(age), itsWeight(weight) {}

SimpleCat * theFunction();

int main()
{
    SimpleCat *pCat = theFunction();
    int age = pCat->getAge();
    std::cout << "*pCat is " << age << " years old!\n";
    std::cout << "pCat: " << pCat << "\n";
    delete pCat;

    return 0;
}

SimpleCat * theFunction()
{
    SimpleCat *pFrisky = new SimpleCat(5, 9);
    std::cout << "pFrisky: " << pFrisky << "\n";

    return pFrisky;
}

// pFrisky: 0x6a1a28
// *pCat is 5 years old!
// pCat: 0x6a1a28
