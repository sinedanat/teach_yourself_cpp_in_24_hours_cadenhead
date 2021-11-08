#include <iostream>

void square(int&, int&);
void cube(int&, int&);
void swap(int&, int&);
void getVals(int&, int&);
void printVals(int, int);

int main()
{
    int valOne = 1, valTwo = 2;
    int choice, i;
    const int maxArray = 5;
    void (*pFuncArray[maxArray])(int&, int&);

    for (i = 0; i < maxArray; i++)
    {
        std::cout << "(1) Change Values "
                  << "(2) Square (3) Cube (4) Swap: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                pFuncArray[i] = getVals;
                break;

            case 2:
                pFuncArray[i] = square;
                break;

            case 3:
                pFuncArray[i] = cube;
                break;

            case 4:
                pFuncArray[i] = swap;
                break;

            default:
                pFuncArray[i] = nullptr;
        }
    }

    for (i = 0; i < maxArray; i++)
    {
        pFuncArray[i](valOne, valTwo);
        printVals(valOne, valTwo);
    }

    return 0;
}

void square(int& rX, int& rY)
{
    rX *= rX;
    rY *= rY;
}

void cube(int& rX, int& rY)
{
    int tmp;

    tmp = rX;
    rX *= rX;
    rX = rX * tmp;

    tmp = rY;
    rY *= rY;
    rY = rY * tmp;
}

void swap(int& rX, int& rY)
{
    int temp;
    temp = rX;
    rX = rY;
    rY = temp;
}

void getVals(int& rValOne, int& rValTwo)
{
    std::cout << "New value for valOne: ";
    std::cin >> rValOne;
    std::cout << "New value for valTwo: ";
    std::cin >> rValTwo;
}

void printVals(int x, int y)
{
    std::cout << "x: " << x << " y: " << y << "\n";
}

// (1) Change Values (2) Square (3) Cube (4) Swap: 1
// (1) Change Values (2) Square (3) Cube (4) Swap: 2
// (1) Change Values (2) Square (3) Cube (4) Swap: 3
// (1) Change Values (2) Square (3) Cube (4) Swap: 4
// (1) Change Values (2) Square (3) Cube (4) Swap: 1
// New value for valOne: 11
// New value for valTwo: 22
// x: 11 y: 22
// x: 121 y: 484
// x: 1771561 y: 113379904
// x: 113379904 y: 1771561
// New value for valOne: 111
// New value for valTwo: 222
// x: 111 y: 222
