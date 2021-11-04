#include <iostream>

int main()
{
    int production[] = {10500, 16000, 5800, 4500, 13900};

    for (int year : production)
    {
        std::cout << "Output: " << year << std::endl;
    }

    return 0;
}

// Output: 10500
// Output: 16000
// Output: 5800
// Output: 4500
// Output: 13900
