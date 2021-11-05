// Modify the HeapAccessor program
// so that it does not use the points-to operator.

#include <iostream>

class SimpleCat
{
public:
    SimpleCat()
    {
        itsAge = 2;
    }
    ~SimpleCat() {}
    int getAge() const
    {
        return itsAge;
    }
    void setAge(int age)
    {
        itsAge = age;
    }
private:
    int itsAge;
};

int main()
{
    SimpleCat *Frisky = new SimpleCat;
    std::cout << "Frisky is " << (*Frisky).getAge()
              << " years old" << "\n";

    (*Frisky).setAge(5);
    std::cout << "Frisky is " << (*Frisky).getAge()
              << " years old\n";

    delete Frisky;

    return 0;
}

// Frisky is 2 years old
// Frisky is 5 years old
