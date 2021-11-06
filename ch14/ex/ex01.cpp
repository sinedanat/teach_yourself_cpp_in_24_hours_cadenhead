// Modify the Rectangle program to create another drawShape() method
// with two integer parameters that include default values.

#include <iostream>

class Rectangle
{
public:
    Rectangle(int width, int height);
    ~Rectangle() {}

    void drawShape(int width = 20, int height = 4) const;

private:
    int width;
    int height;
};

Rectangle::Rectangle(int newWidth, int newHeight)
{
    width = newWidth;
    height = newHeight;
}

void Rectangle::drawShape(int width, int height) const
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "*";
        }

        std::cout << "\n";
    }
}

int main()
{
    Rectangle box(30, 5);
    std::cout << "drawShape(): \n";
    box.drawShape();
    std::cout << "drawShape(40, 2): \n";
    box.drawShape(40, 2);

    return 0;
}

// drawShape(): 
// ********************
// ********************
// ********************
// ********************
// drawShape(40, 2): 
// ****************************************
// ****************************************
