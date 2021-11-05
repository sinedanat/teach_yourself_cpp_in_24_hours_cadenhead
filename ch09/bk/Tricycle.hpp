#include <iostream>

class Tricycle
{
public:
    Tricycle(int initialSpeed);
    ~Tricycle();
    int getSpeed() const
    {
        return speed;
    }
    void setSpeed(int speed);
    void pedal()
    {
        setSpeed(speed + 1);
        std::cout << "\nPedaling " << getSpeed() << " mph\n";
    }
    void brake()
    {
        setSpeed(speed - 1);
        std::cout << "\nPedaling " << getSpeed() << " mph\n";
    }
private:
    int speed;
};
