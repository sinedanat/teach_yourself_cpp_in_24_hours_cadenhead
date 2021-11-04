#include <iostream>

int main()
{
    int counter = 0;
    int multiples = 0;

    while (true)
    {
        counter++;

        if (counter % 14 == 0)
        {
            std::cout << counter << " ";
            multiples++;
        }

        if (multiples > 19)
        {
            break;
        }
    }

    std::cout << "\n";
    
    return 0;
}

// 14 28 42 56 70 84 98 112 126 140 154 168 182 196 210 224 238 252 266 280 
