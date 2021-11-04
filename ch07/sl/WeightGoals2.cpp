#include <iostream>

int main()
{
    float goal[6];
    goal[0] = 0.1;
    goal[1] = 0.25;
    goal[2] = 0.5;
    goal[3] = 0.75;
    goal[4] = 0.9;
    goal[5] = 0.95;
    float weight, target;

    std::cout << "Enter current weight: ";
    std::cin >> weight;
    std::cout << "\nEnter goal weight: ";
    std::cin >> target;
    std::cout << "\n";

    for (int i = 0; i < 6; i++)
    {
        float loss = (weight - target) * goal[i];
        std::cout << "Goal " << i << ": ";
        std::cout << weight - loss << "\n";
    }

    return 0;
}

// Enter current weight: 100
// Enter goal weight: 50
// Goal 0: 95
// Goal 1: 87.5
// Goal 2: 75
// Goal 3: 62.5
// Goal 4: 55
// Goal 5: 52.5
