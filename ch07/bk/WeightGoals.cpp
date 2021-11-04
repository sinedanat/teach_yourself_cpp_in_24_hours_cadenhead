#include <iostream>

int main()
{
    float goal[4];
    goal[0] = 0.1F;
    goal[1] = 0.25F;
    goal[2] = 0.5F;
    goal[3] = 0.75F;
    float weight, target;

    std::cout << "Enter current weight: ";
    std::cin >> weight;
    std::cout << "\nEnter goal weight: ";
    std::cin >> target;
    std::cout << "\n";

    for (int i = 0; i < 4; i++)
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
