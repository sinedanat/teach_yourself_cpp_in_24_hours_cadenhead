// Modify the Mammal2 program (Listing 16.2) to use a text string
// rather than an enumerated data type as the breed.

#include <iostream>

class Mammal
{
public:
    // constructors
    Mammal();
    ~Mammal();

    // accessors
    int getAge() const;
    void setAge(int);
    int getWeight() const;
    void setWeight(int);

    // other methods
    void speak();
    void sleep();

protected:
    int age;
    int weight;
};

class Dog : public Mammal
{
public:
    // constructors
    Dog();
    ~Dog();

    // accessors
    std::string getBreed() const;
    void setBreed(std::string);

    // other methods
    // wagTail();
    // begForFood();

protected:
    std::string itsBreed;
};

int main()
{
    return 0;
}
