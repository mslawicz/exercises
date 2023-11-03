#include "extra.h"
#include <iostream>

class MyClass
{
public:
    inline static int myInt = 100;
};

int main()
{
    MyClass::myInt++;
    std::cout << "myInt = " << MyClass::myInt << std::endl;

    return 0;
}

