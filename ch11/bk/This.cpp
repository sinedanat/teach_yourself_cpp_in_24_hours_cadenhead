#include <iostream>

class Rectangle
{
public:
    Rectangle();
    ~Rectangle();
    void setLength(int length)
    {
        this->itsLength = length;
    }
    int getLength() const
    {
        return this->itsLength;
    }
    void setWidth(int width)
    {
        itsWidth = width;
    }
    int getWidth() const
    {
        return itsWidth;
    }

private:
    int itsLength;
    int itsWidth;
};

Rectangle::Rectangle()
{
    itsWidth = 5;
    itsLength = 10;
}

Rectangle::~Rectangle()
{}

int main()
{
    Rectangle theRect;
    std::cout << "theRect is " << theRect.getLength()
              << " feet long.\n";
    std::cout << "theRect is " << theRect.getWidth()
              << " feet wide.\n";

    theRect.setLength(20);
    theRect.setWidth(10);
    std::cout << "theRect is " << theRect.getLength()
              << " feet long.\n";
    std::cout << "theRect is " << theRect.getWidth()
              << " feet wide.\n";

    return 0;
}

// theRect is 10 feet long.
// theRect is 5 feet wide.
// theRect is 20 feet long.
// theRect is 10 feet wide.
