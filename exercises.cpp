#include "extra.h"
#include <iostream>

int main()
{   
    Item<std::string, int> item1("level", 1);
    Item<int, double> item2(100, 0.707);
    std::cout << "item1 key: " << item1.getKey() << std::endl;
    std::cout << "item2 value: " << item2.getValue() << std::endl;
    return 0;
}
