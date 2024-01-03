#include "extra.h"
#include <iostream>

template<typename K, typename V>
void display(K key, V value)
{
    std::cout << key << "=" << value << std::endl;
}

int main()
{   
    display("level", 2);
    display<char, float>(0x61, 3.0f);
    return 0;
}
