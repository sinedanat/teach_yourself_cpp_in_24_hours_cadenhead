// Write a program that displays the first 100 multiples of 16.

#include <iostream>

int main()
{
    int number = 16;

    std::cout << "\nFirst 100 Multiples of " << number << std::endl;

    for (int counter = 1; counter < 101; counter++)
    {
        std::cout << number * counter << " ";
    }

    std::cout << std::endl;

    return 0;
}

// First 100 Multiples of 16
// 16 32 48 64 80 96 112 128 144 160 176 192 208 224 240 256 272 288 304 320
// 336 352 368 384 400 416 432 448 464 480 496 512 528 544 560 576 592 608 624
// 640 656 672 688 704 720 736 752 768 784 800 816 832 848 864 880 896 912 928
// 944 960 976 992 1008 1024 1040 1056 1072 1088 1104 1120 1136 1152 1168 1184
// 1200 1216 1232 1248 1264 1280 1296 1312 1328 1344 1360 1376 1392 1408 1424
// 1440 1456 1472 1488 1504 1520 1536 1552 1568 1584 1600
