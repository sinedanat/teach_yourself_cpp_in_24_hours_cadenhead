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

    return 0;
}

SimpleCat & theFunction()
{
    SimpleCat Frisky(5, 9);
    
    return Frisky; // Error - Reference to local variable 'Frisky' returned
}
