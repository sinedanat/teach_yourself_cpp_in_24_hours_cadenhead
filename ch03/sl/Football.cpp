#include <iostream>

void displayScore(int greenBay, int pittsburgh)
{
    if(greenBay > pittsburgh)
    {
        std::cout << "Green Bay " << greenBay << " Pittsburgh " << pittsburgh << "\n";
    }
    else
    {
        std::cout << "Pittsburgh " << pittsburgh << " Green Bay " << greenBay << "\n";
    }
}

int main()
{
    const int TOUCHDOWN = 6;
    const int FIELD_GOAL = 3;
    const int EXTRA_POINT = 1;
    // const int SAFETY = 2;

    int greenBay = 0;
    int pittsburgh = 0;

    greenBay = TOUCHDOWN + EXTRA_POINT + TOUCHDOWN + EXTRA_POINT;
    pittsburgh = FIELD_GOAL;
    displayScore(greenBay, pittsburgh);
    greenBay = greenBay + TOUCHDOWN + EXTRA_POINT;
    pittsburgh = pittsburgh + TOUCHDOWN + EXTRA_POINT + TOUCHDOWN + EXTRA_POINT;
    displayScore(greenBay, pittsburgh);
    greenBay = greenBay + TOUCHDOWN + EXTRA_POINT;
    pittsburgh = pittsburgh + TOUCHDOWN + EXTRA_POINT + EXTRA_POINT;
    displayScore(greenBay, pittsburgh);
    greenBay = greenBay + FIELD_GOAL;
    displayScore(greenBay, pittsburgh);

    return 0;
}