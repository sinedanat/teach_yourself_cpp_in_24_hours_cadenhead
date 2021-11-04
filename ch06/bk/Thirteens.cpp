#include <iostream>

int main()
{
    int counter = 0;

    while (counter < 500)
    {
        counter++;

        if (counter % 13 == 0)
        {
            std::cout << counter << " ";
        }
    }

    std::cout << "\n";

    return 0;
}

// 13 26 39 52 65 78 91 104 117 130 143 156 169 182 195 208 221 234 247 260
// 273 286 299 312 325 338 351 364 377 390 403 416 429 442 455 468 481 494 
