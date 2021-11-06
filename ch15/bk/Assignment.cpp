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
    Tricycle operator=(const Tricycle &);

private:
    int *speed;
};

Tricycle::Tricycle()
{
    speed = new int;
    *speed = 5;
}

Tricycle Tricycle::operator=(const Tricycle & rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    else
    {
        delete speed;

        speed = new int;
        *speed = rhs.getSpeed();

        return *this;
    }
}

int main()
{
    Tricycle wichita;
    std::cout << "Wichita's speed: " << wichita.getSpeed() << "\n";
    std::cout << "Setting Wichita's speed to 6 ...\n";
    wichita.setSpeed(6);
    Tricycle dallas;
    std::cout << "Dallas' speed: " << dallas.getSpeed() << "\n";
    std::cout << "Copying Wichita to Dallas ...\n";
    dallas = wichita;
    std::cout << "Dallas' speed: " << dallas.getSpeed() << "\n";

    return 0;
}

// Wichita's speed: 5
// Setting Wichita's speed to 6 ...
// Dallas' speed: 5
// Copying Wichita to Dallas ...
// Dallas' speed: 6
