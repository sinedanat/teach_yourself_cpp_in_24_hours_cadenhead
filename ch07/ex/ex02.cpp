// Modify the WeightGoals program to use a foreach loop
// and add a new milestone for 10%.

#include <iostream>

int main()
{
    float goals[5];
    goals[0] = 0.1F;
    goals[1] = 0.25F;
    goals[2] = 0.5F;
    goals[3] = 0.75F;
    goals[4] = 0.9F;
    float weight, target;
    
    // For use in foreach loop to count goals.
    int i = 0;

    std::cout << "Enter current weight: ";
    std::cin >> weight;
    std::cout << "\nEnter goal weight: ";
    std::cin >> target;
    std::cout << "\n";

    for (float goal : goals)
    {
        float loss = (weight - target) * goal;
        std::cout << "Goal " << i << ": ";
        std::cout << weight - loss << "\n";
        i++;
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
