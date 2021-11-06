#include <iostream>

class Tricycle
{
public:
    Tricycle();                     // default constructor
    Tricycle(const Tricycle &);     // copy constructor
    ~Tricycle();                    // destructor
    int getSpeed() const
    {
        return *speed;
    }
    void setSpeed(int newSpeed)
    {
        *speed = newSpeed;
    }
    void pedal();
    void brake();

private:
    int *speed;
};

Tricycle::Tricycle()
{
    speed = new int;
    *speed = 5;
}

Tricycle::Tricycle(const Tricycle & rhs)
{
    speed = new int;
    *speed = rhs.getSpeed();
}

Tricycle::~Tricycle()
{
    delete speed;
    speed = nullptr;
}

void Tricycle::pedal()
{
    setSpeed(*speed + 1);
    std::cout << "\nPedaling " << getSpeed() << " mph\n";
}
void Tricycle::brake()
{
    setSpeed(*speed - 1);
    std::cout << "\nPedaling " << getSpeed() << " mph\n";
}

int main()
{
    std::cout << "Creating trike named wichita ...";
    Tricycle wichita;
    wichita.pedal();
    std::cout << "Creating trike named dallas ...\n";
    Tricycle dallas(wichita);
    std::cout << "wichita's speed: " << wichita.getSpeed() << "\n";
    std::cout << "dallas's speed: " << dallas.getSpeed() << "\n";
    std::cout << "setting wichita to 10 ...\n";
    wichita.setSpeed(10);
    std::cout << "wichita's speed: " << wichita.getSpeed() << "\n";
    std::cout << "dallas's speed: " << dallas.getSpeed() << "\n";
    
    return 0;
}

// Creating trike named wichita ...
// Pedaling 6 mph
// Creating trike named dallas ...
// wichita's speed: 6
// dallas's speed: 6
// setting wichita to 10 ...
// wichita's speed: 10
// dallas's speed: 6
