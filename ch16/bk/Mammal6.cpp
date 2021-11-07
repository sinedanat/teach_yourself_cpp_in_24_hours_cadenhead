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
    void move() const
    {
        std::cout << "Dog moves 5 steps\n";
    }
}; // you may receive a warning that you are hiding a function!

int main()
{
    Mammal bigAnimal;
    Dog fido;
    bigAnimal.move();
    bigAnimal.move(2);
    fido.move();
    // fido.move(10); // Error - No matching function for call to 'Dog::move(int)

    return 0;
}

// Mammal moves one step
// Mammal moves 2 steps
// Dog moves 5 steps
