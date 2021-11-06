// Modify the Assignment program (Listing 15.6)
// to overload the equality operator (==).
// Use that operator to compare two Tricycle object’s speeds.

#include <iostream>

class Tricycle
{
public:
    Tricycle();
    // copy constructor and destructor use default
    int getSpeed() const
    {
        return *speed;
    }
    void setSpeed(int newSpeed)
    {
        *speed = newSpeed;
    }
    bool operator==(const Tricycle &);

private:
    int *speed;
};

Tricycle::Tricycle()
{
    speed = new int;
    *speed = 5;
}

bool Tricycle::operator==(const Tricycle & rhs)
{
    if (this == &rhs)
    {
        return true;
    }
    else
    {
        if (this->getSpeed() == rhs.getSpeed())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    Tricycle wichita;
    wichita.setSpeed(6);
    std::cout << "Wichita's speed: " << wichita.getSpeed() << "\n";

    Tricycle dallas;
    dallas.setSpeed(6);
    std::cout << "Dallas' speed: " << dallas.getSpeed() << "\n";

    std::cout << "dallas == wichita: " << (dallas == wichita) << "\n";

    dallas.setSpeed(7);
    std::cout << "Wichita's speed: " << wichita.getSpeed() << "\n";
    std::cout << "Dallas' speed: " << dallas.getSpeed() << "\n";

    std::cout << "dallas == wichita: " << (dallas == wichita) << "\n";

    return 0;
}

// Wichita's speed: 6
// Dallas' speed: 6
// dallas == wichita: 1
// Wichita's speed: 6
// Dallas' speed: 7
// dallas == wichita: 0
