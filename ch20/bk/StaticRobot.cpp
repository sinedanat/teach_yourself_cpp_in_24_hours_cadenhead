#include <iostream>

class Robot
{
public:
    Robot(int newAge = 1): age(newAge)
    {
        howManyRobots++;
    }
    virtual ~Robot()
    {
        howManyRobots--;
    }
    virtual int getAge() const
    {
        return age;
    }
    virtual void setAge(int newAge)
    {
        age = newAge;
    }
    static int howManyRobots;

private:
    int age;
};

int Robot::howManyRobots = 0;

int main()
{
    const int maxRobots = 5;
    Robot* gestalt[maxRobots];
    int i;

    for (i = 0; i < maxRobots; i++)

        gestalt[i] = new Robot(i);

    for (i = 0; i < maxRobots; i++)
    {

        std::cout << "There are ";
        std::cout << Robot::howManyRobots;
        std::cout << " robots left!\n";
        std::cout << "Deleting the one which is ";
        std::cout << gestalt[i]->getAge();
        std::cout << " years old\n";

        delete gestalt[i];
        gestalt[i] = nullptr;
    }

    return 0;
}

// There are 5 robots left!
// Deleting the one which is 0 years old
// There are 4 robots left!
// Deleting the one which is 1 years old
// There are 3 robots left!
// Deleting the one which is 2 years old
// There are 2 robots left!
// Deleting the one which is 3 years old
// There are 1 robots left!
// Deleting the one which is 4 years old
