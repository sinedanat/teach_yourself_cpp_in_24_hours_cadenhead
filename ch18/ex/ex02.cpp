// Modify the Mammal13 program in Listing 18.2
// to see what happens if you remove the if test in lines 56–59
// and call the purr() member function in all cases.
// Which objects work properly and which fail?

#include <iostream>

class Mammal
{
public:
    Mammal(): age(1)
    {
        std::cout << "Mammal constructor ...\n";
    }
    Mammal(int age): age(age)
    {
        std::cout << "Mammal constructor ...\n";
    }
    virtual ~Mammal()
    {
        std::cout << "Mammal destructor ...\n";
    }
    virtual void speak() const
    {
        std::cout << "Mammal speak!\n";
    }
    int getAge() const
    {
        return age;
    }
protected:
    int age;
};

class Cat: public Mammal
{
public:
    Cat(int age): Mammal(age)
    {
        std::cout << "Cat constructor ...\n";
    }
    ~Cat()
    {
        std::cout << "Cat destructor ...\n";
    }
    void speak() const
    {
        std::cout << "Meow!\n";
    }
    void purr() const
    {
        std::cout << "Rrrrrrrrrrr!\n";
    }
};

class Dog: public Mammal
{
public:
    Dog(int age): Mammal(age)
    {
        std::cout << "Dog constructor ...\n";
    }
    ~Dog()
    {
        std::cout << "Dog destructor ...\n";
    }
    void speak() const
    {
        std::cout << "Woof!\n";
    }
};

int main()
{
    const int numberMammals = 3;
    Mammal *zoo[numberMammals];
    Mammal *pMammal;
    int choice, i;

    for (i = 0; i < numberMammals; i++)
    {
        std::cout << "(1)Dog (2)Cat: ";
        std::cin >> choice;

        if (choice == 1)
            pMammal = new Dog(2);
        else
            pMammal = new Cat(4);

        zoo[i] = pMammal;
    }

    std::cout << "\n";

    for (i = 0; i < numberMammals; i++)
    {
        zoo[i]->speak();

        Cat *pRealCat = dynamic_cast<Cat *>(zoo[i]);

        std::cout << "pRealCat: " << pRealCat << "\n";
        pRealCat->purr();
        std::cout << "getAge(): " << pRealCat->getAge() << "\n"; // Runtime Error!

        delete zoo[i];
        std::cout << "\n";
    }

    return 0;
}

// (1)Dog (2)Cat: 2
// Mammal constructor ...
// Cat constructor ...
// (1)Dog (2)Cat: 1
// Mammal constructor ...
// Dog constructor ...
// (1)Dog (2)Cat: 2
// Mammal constructor ...
// Cat constructor ...
//
// Meow!
// pRealCat: 0x711a18
// Rrrrrrrrrrr!
// getAge(): 4
// Cat destructor ...
// Mammal destructor ...
//
// Woof!
// pRealCat: 0
// Rrrrrrrrrrr!
// getAge():
//
// Runtime Error!
