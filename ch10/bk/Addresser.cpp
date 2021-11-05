#include <iostream>

int main()
{
    unsigned short shortVar = 5;
    unsigned long  longVar = 65535;
    long sVar = -65535;

    std::cout << "shortVar:\t" << shortVar;
    std::cout << "\tAddress of shortVar:\t" << &shortVar << "\n";
    std::cout << "longVar:\t"  << longVar;
    std::cout << "\tAddress of longVar:\t"  << &longVar  << "\n";
    std::cout << "sVar:\t\t"   << sVar;
    std::cout << "\tAddress of sVar:\t"     << &sVar     << "\n";

    return 0;
}

// shortVar:   5   Address of shortVar:    0x4af99e
// longVar:    65535   Address of longVar: 0x4af998
// sVar:       -65535  Address of sVar:    0x4af994
