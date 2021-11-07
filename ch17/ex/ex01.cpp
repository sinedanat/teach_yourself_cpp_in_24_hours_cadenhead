// Modify the Mammal8 program by commenting out line 21
// the speak() member function within dog.
// Can you think of examples where it makes sense to do this?

#include <iostream>

class Mammal
{
public:
    Mammal(): age(1)
    {
        std::cout << "Mammal constructor ...\n";
    }
    ~Mammal()
    {
        std::cout << "Mammal destructor ...\n";
    }
    void move() const
    {
        std::cout << "Mammal, move one step\n";
    }
    virtual void speak() const
    {
        std::cout << "Mammal speak!\n";
    }

protected:
    int age;
};

class Dog : public Mammal
{
public:
    Dog()
    {
        std::cout << "Dog constructor ...\n";
    }
    ~Dog()
    {
        std::cout << "Dog destructor ..\n";
    }
    void wagTail()
    {
        std::cout << "Wagging tail ...\n";
    }
    void move() const
    {
        std::cout << "Dog moves 5 steps ...\n";
    }
    // void speak() const
    // {
    //     std::cout << "Woof!\n";
    // }
};

int main()
{
    Mammal *pDog = new Dog;
    pDog->move();
    pDog->speak();

    return 0;
}

// Mammal constructor ...
// Dog constructor ...
// Mammal, move one step
// Mammal speak!
