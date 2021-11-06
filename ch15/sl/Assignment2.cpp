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

    if (this->getSpeed() >= rhs.getSpeed())
    {
        return true;
    }

    return false;
}

int main()
{
    Tricycle wichita;
    std::cout << "Wichita speed: " << wichita.getSpeed() << "\n";
    std::cout << "Setting Wichita speed to 8 ...\n";
    wichita.setSpeed(8);
    Tricycle dallas;
    std::cout << "Dallas speed: " << dallas.getSpeed() << "\n";
    std::cout << "Setting Dallas speed to 7 ...\n";
    dallas.setSpeed(7);

    if (wichita == dallas)
    {
        std::cout << "Wichita speed >= Dallas speed\n";
    }
    else
    {
        std::cout << "Wichita speed < Dallas speed\n";
    }

    return 0;
}

// Wichita speed: 5
// Setting Wichita speed to 8 ...
// Dallas speed: 5
// Setting Dallas speed to 7 ...
// Wichita speed >= Dallas speed
