#include <iostream>

class Counter
{
public:
    Counter();
    ~Counter() {}
    int getValue() const
    {
        return value;
    }
    void setValue(int x)
    {
        value = x;
    }
    void increment()
    {
        ++value;
    }
    const Counter& operator++();
    const Counter& operator--();

private:
    int value;
};

Counter::Counter():
    value(0)
{}

const Counter& Counter::operator++()
{
    ++value;
    return *this;
}

const Counter& Counter::operator--()
{
    --value;
    return *this;
}

int main()
{
    Counter c;
    std::cout << "The value of c is " << c.getValue() << "\n";
    --c;
    std::cout << "The value of c is " << c.getValue() << "\n";
    ++c;
    std::cout << "The value of c is " << c.getValue() << "\n";
    Counter a = ++c;
    std::cout << "The value of a: " << a.getValue();
    std::cout << " and c: " << c.getValue() << "\n";

    return 0;
}

// The value of c is 0
// The value of c is -1
// The value of c is 0
// The value of a: 1 and c: 1
