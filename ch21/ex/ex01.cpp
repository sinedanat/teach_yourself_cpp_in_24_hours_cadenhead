// Write a program that takes the U.S. national debt,
// adds $2.35 billion a day for 10 days
// and displays the result with a lambda expression.

#include <iostream>

int main()
{

    long long debtUS = 28'429'000'000'000;
    long long inc = 2'350'000'000;

    for (int i = 0; i < 10; i++)
    {
        debtUS += inc;
    }

    auto showDebt = [](long long debt)
    {
        std::cout << "debt: " << debt << std::endl;
    };

    showDebt(debtUS);

    return 0;
}

// debt: 28452500000000
