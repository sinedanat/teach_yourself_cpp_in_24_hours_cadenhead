#include "Tricycle.hpp"

// constructor for the object
Tricycle::Tricycle(int initialSpeed)
{
    setSpeed(initialSpeed);
}

// destructor for the object
Tricycle::~Tricycle()
{
    // do nothing
}

// set the trike's speed
void Tricycle::setSpeed(int newSpeed)
{
    if (newSpeed >= 0)
    {
        speed = newSpeed;
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

    return 0;
}

// Pedaling 6 mph
// Pedaling 7 mph
// Pedaling 6 mph
// Pedaling 5 mph
// Pedaling 4 mph
