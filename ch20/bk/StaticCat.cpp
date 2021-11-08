#include <iostream>

class Cat
{
public:
    Cat(int newAge = 1): age(newAge)
    {
        howManyCats++;
    }
    virtual ~Cat()
    {
        howManyCats--;
    }
    virtual int getAge()
    {
        return age;
    }
    virtual void setAge(int newAge)
    {
        age = newAge;
    }
    static int howManyCats;

private:
    int age;
};

int Cat::howManyCats = 0;

int main()
{
    const int maxCats = 5;
    Cat* catHouse[maxCats];
    int i;

    for (i = 0; i < maxCats; i++)
        catHouse[i] = new Cat(i);

    for (i = 0; i < maxCats; i++)
    {
        std::cout << "There are ";
        std::cout << Cat::howManyCats;
        std::cout << " cats left!\n";
        std::cout << "Deleting the one which is ";
        std::cout << catHouse[i]->getAge();
        std::cout << " years old\n";
        delete catHouse[i];
        catHouse[i] = 0;
    }

    return 0;
}

// There are 5 cats left!
// Deleting the one which is 0 years old
// There are 4 cats left!
// Deleting the one which is 1 years old
// There are 3 cats left!
// Deleting the one which is 2 years old
// There are 2 cats left!
// Deleting the one which is 3 years old
// There are 1 cats left!
// Deleting the one which is 4 years old
