#include "extra.h"
#include <iostream>

template<typename T>
T max(T first, T second)
{
    return first > second ? first : second;
}

int main()
{   
    std::cout << "max of int: " << max(2, 3) << std::endl;
    std::cout << "max of float: " << max(2.5f, 2.3f) << std::endl;
    std::cout << "max of char: " << max('a', 'A') << std::endl;
    return 0;
}
