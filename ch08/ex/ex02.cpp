// Modify the NewTricycle application to add
// a member variable called wheelSize
// that must be at least 4 in value when set with an accessor.

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
    void setWheelSize(int newWheelSize);
    int getWheelSize();
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

// set wheel size
void Tricycle::setWheelSize(int newWheelSize)
{
    if (newWheelSize >= 4)
    {
        wheelSize = newWheelSize;
    }
}

// get wheel size
int Tricycle::getWheelSize()
{
    return wheelSize;
}

// create a trike and ride it
int main()
{
    Tricycle wichita(5);
    wichita.setWheelSize(2);
    std::cout << "\nWheel size: " << wichita.getWheelSize() << "\n";
    wichita.setWheelSize(7);
    std::cout << "\nWheel size: " << wichita.getWheelSize() << "\n";
    wichita.pedal();
    wichita.brake();
    wichita.brake();

    return 0;
}

// Wheel size: 4
// Wheel size: 7
// Pedaling; tricycle speed 6 mph
// Braking; tricycle speed 5 mph
// Braking; tricycle speed 4 mph
