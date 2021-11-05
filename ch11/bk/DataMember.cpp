#include <iostream>

class SimpleCat
{
public:
    SimpleCat();
    ~SimpleCat();
    int getAge() const
    {
        return *itsAge;
    }
    void setAge(int age)
    {
        *itsAge = age;
    }

    int getWeight() const
    {
        return *itsWeight;
    }
    void setWeight(int weight)
    {
        *itsWeight = weight;
    }

private:
    int *itsAge;
    int *itsWeight;
};

SimpleCat::SimpleCat()
{
    itsAge = new int(2);
    itsWeight = new int(5);
}

SimpleCat::~SimpleCat()
{
    delete itsAge;
    delete itsWeight;
}

int main()
{
    SimpleCat *Frisky = new SimpleCat;
    std::cout << "Frisky is " << Frisky->getAge()
              << " years old\n";

    Frisky->setAge(5);
    std::cout << "Frisky is " << Frisky->getAge()
              << " years old\n";

    delete Frisky;
    
    return 0;
}

// Frisky is 2 years old
// Frisky is 5 years old
