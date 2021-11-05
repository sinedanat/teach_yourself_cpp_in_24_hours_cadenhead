#include <iostream>
#include "Point.hpp"

// This file contains no changes from Rectangle2.hpp other than the preceding line
class  Rectangle
{
public:
    Rectangle(int newTop, int newLeft, int newBottom, int newRight);
    ~Rectangle() {}

    int getTop() const
    {
        return top;
    }
    int getLeft() const
    {
        return left;
    }
    int getBottom() const
    {
        return bottom;
    }
    int getRight() const
    {
        return right;
    }

    Point getUpperLeft() const
    {
        return upperLeft;
    }
    Point getLowerLeft() const
    {
        return lowerLeft;
    }
    Point getUpperRight() const
    {
        return upperRight;
    }
    Point getLowerRight() const
    {
        return lowerRight;
    }

    void setUpperLeft(Point location);
    void setLowerLeft(Point location);
    void setUpperRight(Point location);
    void setLowerRight(Point location);

    void setTop(int newTop);
    void setLeft(int newLeft);
    void setBottom(int newBottom);
    void setRight(int newRight);

    int getArea() const;

private:
    Point upperLeft;
    Point upperRight;
    Point lowerLeft;
    Point lowerRight;
    int top;
    int left;
    int bottom;
    int right;
};
