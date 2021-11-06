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

SimpleCat & theFunction();

int main()
{
    SimpleCat &rCat = theFunction();
    int age = rCat.getAge();
    std::cout << "rCat is " << age << " years old!\n";
    std::cout << "&rCat: " << &rCat << "\n";
    // How do you get rid of that memory?
    SimpleCat *pCat = &rCat;
    delete pCat;
    // Uh oh, rCat now refers to ??

    return 0;
}

SimpleCat & theFunction()
{
    SimpleCat *pFrisky = new SimpleCat(5, 9);
    std::cout << "pFrisky: " << pFrisky << "\n";

    return *pFrisky;
}

// pFrisky: 0x841a28
// rCat is 5 years old!
// &rCat: 0x841a28
