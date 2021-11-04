#include <iostream>

class Tricycle
{
public:
    Tricycle(int initialAge);
    ~Tricycle();
    int getSpeed();
    void setSpeed(int speed);
    void pedal();
    void brake();
    int getWheelSize();
    void setWheelSize(int wheelSize);
private:
    int speed;
    int wheelSize;
};

// constructor for the object
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
    setWheelSize(4);
}

// destructor for the object
Tricycle::~Tricycle()
{
    // do nothing
}

// get the trike's speed
int Tricycle::getSpeed()
{
    return speed;
}

// set the trike's speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    {
        speed = newSpeed;
    }
}

// pedal the trike
void Tricycle::pedal()
{
    setSpeed(speed + 1);
    std::cout << "\nPedaling; tricycle speed " << getSpeed() << " mph\n";
}

// apply the brake on the trike
void Tricycle::brake()
{
    setSpeed(speed - 1);
    std::cout << "\nBraking; tricycle speed " << getSpeed() << " mph\n";
}

// get the trike's wheel size
int Tricycle::getWheelSize()
{
    return wheelSize;
}

// set the trike's speed
void Tricycle::setWheelSize(int newWheelSize)
{
    if (newWheelSize >= 4)
    {
        wheelSize = newWheelSize;
    }
}

// create a trike and ride it
int main()
{
    Tricycle wichita(5);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    wichita.setWheelSize(3);
    std::cout << "\nWheel size: " << wichita.getWheelSize() << "\n";
    wichita.setWheelSize(5);
    std::cout << "\nWheel size: " << wichita.getWheelSize() << "\n";

    return 0;
}

// Pedaling; tricycle speed 6 mph
// Pedaling; tricycle speed 7 mph
// Braking; tricycle speed 6 mph
// Braking; tricycle speed 5 mph
// Braking; tricycle speed 4 mph
// Wheel size: 4
// Wheel size: 5
