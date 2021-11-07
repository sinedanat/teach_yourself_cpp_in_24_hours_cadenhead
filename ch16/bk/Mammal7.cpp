#include <iostream>

class Mammal
{
public:
    void move() const
    {
        std::cout << "Mammal moves one step\n";
    }
    void move(int distance) const
    {
        std::cout << "Mammal moves " << distance << " steps\n";
    }
protected:
    int age;
    int weight;
};

class Dog : public Mammal
{
public:
    void move() const;
};

void Dog::move() const
{
    std::cout << "Dog moves ...\n";
    Mammal::move(3);
}

int main()
{
    Mammal bigAnimal;
    Dog fido;
    bigAnimal.move();
    bigAnimal.move(2);
    fido.move();
    fido.Mammal::move(6);
    
    return 0;
}

// Mammal moves one step
// Mammal moves 2 steps
// Dog moves ...
// Mammal moves 3 steps
// Mammal moves 6 steps
