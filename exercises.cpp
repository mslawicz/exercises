#include "extra.h"
#include <iostream>
#include <array>

int main()
{
    int myArray[] {1,2,3};
    auto [x, y, z] = myArray;
    std::cout << x << "," << y << "," << z << std::endl;
    
    return 0;
}