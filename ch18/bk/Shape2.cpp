#include <iostream>

class Shape
{
public:
    Shape() {}
    virtual ~Shape() {}
    virtual long getArea() = 0;
    virtual long getPerim() = 0;
    virtual void draw() = 0;
private:
};

void Shape::draw()
{
    std::cout << "Abstract drawing mechanism!\n";
}

class Circle : public Shape
{
public:
    Circle(int newRadius): radius(newRadius) {}
    ~Circle() {}
    long getArea()
    {
        return 3 * radius * radius;
    }
    long getPerim()
    {
        return 9 * radius;
    }
    void draw();
private:
    int radius;
    int circumference;
};

void Circle::draw()
{
    std::cout << "Circle drawing routine here!\n";
    Shape::draw();
}

class Rectangle : public Shape
{
public:
    Rectangle(int newLen, int newWidth):
        length(newLen), width(newWidth) {}
    virtual ~Rectangle() {}
    long getArea()
    {
        return length * width;
    }
    long getPerim()
    {
        return 2 * length + 2 * width;
    }
    virtual int getLength()
    {
        return length;
    }
    virtual int getWidth()
    {
        return width;
    }
    void draw();
private:
    int width;
    int length;
};

void Rectangle::draw()
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
            std::cout << "x ";

        std::cout << "\n";
    }

    Shape::draw();
}

class Square : public Rectangle
{
public:
    Square(int len);
    Square(int len, int width);
    ~Square() {}
    long getPerim()
    {
        return 4 * getLength();
    }
};

Square::Square(int newLen):
    Rectangle(newLen, newLen)
{}

Square::Square(int newLen, int newWidth):
    Rectangle(newLen, newWidth)
{
    if (getLength() != getWidth())
        std::cout << "Error, not a square ... a rectangle?\n";
}

int main()
{
    int choice;
    bool fQuit = false;
    Shape * sp;

    while (1)
    {
        std::cout << "(1) Circle (2) Rectangle (3) Square (0) Quit: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                sp = new Circle(5);
                break;

            case 2:
                sp = new Rectangle(4, 6);
                break;

            case 3:
                sp = new Square(5);
                break;

            default:
                fQuit = true;
                break;
        }

        if (fQuit)
            break;

        sp->draw();
        std::cout << "\n";
    }

    return 0;
}

// (1) Circle (2) Rectangle (3) Square (0) Quit: 1
// Circle drawing routine here!
// Abstract drawing mechanism!
// 
// (1) Circle (2) Rectangle (3) Square (0) Quit: 2
// x x x x x x
// x x x x x x
// x x x x x x
// x x x x x x
// Abstract drawing mechanism!
// 
// (1) Circle (2) Rectangle (3) Square (0) Quit: 3
// x x x x x
// x x x x x
// x x x x x
// x x x x x
// x x x x x
// Abstract drawing mechanism!
// 
// (1) Circle (2) Rectangle (3) Square (0) Quit: 0
