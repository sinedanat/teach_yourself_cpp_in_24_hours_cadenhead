#include <iostream>
#include "Point.hpp"

class Line
{
public:
    Line(Point pp1, Point pp2)
    {
        setLine(pp1, pp2);
    }
    ~Line() {}
    void setLine(Point pp1, Point pp2)
    {
        p1 = pp1;
        p2 = pp2;
    }
    void getLine() const
    {
        std::cout << "Point 1: " << p1.getX() << ", " << p1.getY() << std::endl;
        std::cout << "Point 2: " << p2.getX() << ", " << p2.getY() << std::endl;
    }
private:
    Point p1;
    Point p2;
};

int main()
{
    Point p1;
    p1.setX(10);
    p1.setY(100);

    Point p2;
    p2.setX(20);
    p2.setY(200);

    Line line(p1, p2);
    line.getLine();

    return 0;
}
