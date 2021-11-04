#include <iostream>

int main()
{
    int box[5][3] = {8, 6, 7, 5, 3, 0, 9, 2, 1, 7, 8, 9, 0, 5, 2};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "box[" << i << "]";
            std::cout << "[" << j << "] = ";
            std::cout << box[i][j] << "\n";
        }
    }

    return 0;
}

// box[0][0] = 8
// box[0][1] = 6
// box[0][2] = 7
// box[1][0] = 5
// box[1][1] = 3
// box[1][2] = 0
// box[2][0] = 9
// box[2][1] = 2
// box[2][2] = 1
// box[3][0] = 7
// box[3][1] = 8
// box[3][2] = 9
// box[4][0] = 0
// box[4][1] = 5
// box[4][2] = 2
