#include <iostream>

int main()
{
    // The lambda expression can have one or more arguments,
    // which are specified within the parenthesis
    // marks after the [ ] square brackets.
    auto multiply1 = [](int x, int y)
    {
        std::cout << "Total: " << x * y << std::endl;
    };
    multiply1(7, 17);

    // The expression can return a value by specifying
    // its return type (or auto) after a -> operator.
    auto multiply2 = [](int x, int y) -> int { return x * y; };
    int sum2 = multiply2(7, 17);
    std::cout << "Total: " << sum2 << std::endl;

    // To make one or more variables from the enclosing scope
    // available in the lambda expression,
    // list them inside the [ and ] brackets separated by commas.
    int x = 7;
    auto multiply3 = [x](int y) -> int { return x * y; };
    int sum3 = multiply3(17);
    std::cout << "Total: " << sum3 << std::endl;

    return 0;
}

// Total: 119
// Total: 119
// Total: 119
