#include <iostream>

class Rectangle
{
public:
    Rectangle();
    ~Rectangle();
    void setLength(int length)
    {
        itsLength = length;
    }
    int getLength() const
    {
        return itsLength;
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

Rectangle::Rectangle():
    itsLength(10),
    itsWidth(5)
{}

Rectangle::~Rectangle()
{}

int main()
{
    Rectangle *pRect =  new Rectangle;
    const Rectangle *pConstRect = new Rectangle;
    Rectangle *const pConstPtr = new Rectangle;

    std::cout << "pRect width: "
              << pRect->getWidth() << " feet\n";
    std::cout << "pConstRect width: "
              << pConstRect->getWidth() << " feet\n";
    std::cout << "pConstPtr width: "
              << pConstPtr->getWidth() << " feet\n";

    pRect->setWidth(10);
    // pConstRect->setWidth(10);
    pConstPtr->setWidth(10);

    std::cout << "pRect width: "
              << pRect->getWidth() << " feet\n";
    std::cout << "pConstRect width: "
              << pConstRect->getWidth() << " feet\n";
    std::cout << "pConstPtr width: "
              << pConstPtr->getWidth() << " feet\n";

    return 0;
}

// pRect width: 5 feet
// pConstRect width: 5 feet
// pConstPtr width: 5 feet
// pRect width: 10 feet
// pConstRect width: 5 feet
// pConstPtr width: 10 feet
