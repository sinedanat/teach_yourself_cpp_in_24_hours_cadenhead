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
    static int getHowMany()
    {
        return howManyRobots;
    }
private:
    int age;
    static int howManyRobots;
};

int Robot::howManyRobots = 0;

void countRobots();

int main()
{
    const int maxRobots = 5;
    Robot* gestalt[maxRobots];
    int i;

    for (i = 0; i < maxRobots; i++)
    {

        gestalt[i] = new Robot(i);

        countRobots();
    }

    std::cout << "\n";

    for (i = 0; i < maxRobots; i++)
    {

        delete gestalt[i];
        gestalt[i] = nullptr;

        countRobots();
    }

    return 0;
}

void countRobots()
{
    std::cout << "There are " << Robot::getHowMany() << " robots.\n";
}

// There are 1 robots.
// There are 2 robots.
// There are 3 robots.
// There are 4 robots.
// There are 5 robots.
//
// There are 4 robots.
// There are 3 robots.
// There are 2 robots.
// There are 1 robots.
// There are 0 robots.
