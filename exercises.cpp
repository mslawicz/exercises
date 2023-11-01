#include "extra.h"
#include <iostream>

class MyClass
{
public:
    explicit MyClass(int x) {this->X = x;}
    int X{0};
};

void showX(MyClass myClass)
{
    std::cout << "X = " << myClass.X << std::endl;
}

int main()
{
    //showX(10);  // implicite conversion not possible
    showX(MyClass{20});

    return 0;
}