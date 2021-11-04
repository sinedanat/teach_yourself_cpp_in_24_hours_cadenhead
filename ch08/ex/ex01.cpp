// Modify the Tricycle application to add a second trike.
// Give it an initial value and try
// the pedal() and brake() member functions on it.

#include <iostream>

class Tricycle
{
public:
    int getSpeed();
    void setSpeed(int speed);
    void pedal();
    void brake();
private:
    int speed;
};

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

// create a trike and ride it
int main()
{
    Tricycle wichita;
    wichita.setSpeed(0);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();

    std::cout << "\nCreate another tricycle ..." << std::endl;

    Tricycle other;
    other.setSpeed(4);
    other.pedal();
    other.pedal();
    other.brake();

    return 0;
}

// Pedaling; tricycle speed 1 mph
// Pedaling; tricycle speed 2 mph
// Braking; tricycle speed 1 mph
// Braking; tricycle speed 0 mph
// Braking; tricycle speed 0 mph
// Create another tricycle ...
// Pedaling; tricycle speed 5 mph
// Pedaling; tricycle speed 6 mph
// Braking; tricycle speed 5 mph
