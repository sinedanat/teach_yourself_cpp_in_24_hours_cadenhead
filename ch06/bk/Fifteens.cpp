#include <iostream>

int main()
{
    int counter = 0;
    int multiples = 0;

    while (multiples < 19)
    {
        counter++;

        if (counter % 15 != 0)
        {
            continue;
        }

        std::cout << counter << " ";
        multiples++;
    }

    std::cout << "\n";

    return 0;
}

// 15 30 45 60 75 90 105 120 135 150 165 180 195 210 225 240 255 270 285 
