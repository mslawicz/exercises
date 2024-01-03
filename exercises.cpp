#include "extra.h"
#include <iostream>

template<typename T>
T max(T first, T second)
{
    return first > second ? first : second;
}

int main()
{   
    std::cout << "max of double: " << max<double>(2, 3) << std::endl;
    std::cout << "max of int: " << max<int>(2.1f, 1.9f) << std::endl;
    std::cout << "max of int: " << max<int>('a', 'A') << std::endl;
    return 0;
}
