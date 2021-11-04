// Create a program that uses constants for a touchdown (6 points),
// field goal (3 points), point after touchdown (1 point),
// and safety (2 point) and then adds them in the same order
// they were scored by the teams in the last Super Bowl.
// Display the final score.
// (For extra credit, make the Carolina Panthers win.)

#include <iostream>

void displayScore(int greenBay, int pittsburgh)
{
    if(greenBay > pittsburgh)
    {
        std::cout << "Green Bay " << greenBay << " Pittsburgh "
                  << pittsburgh << "\n";
    }
    else
    {
        std::cout << "Pittsburgh " << pittsburgh << " Green Bay "
                  << greenBay << "\n";
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