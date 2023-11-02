#include "extra.h"
#include <iostream>

class MyClass
{
public:
    explicit MyClass(int x) {this->X = x;}
    MyClass(int x, int y);
    void showXY();
private:    
    int X{0};
    int Y{0};
};


int main()
{
    MyClass myClass(10, 20);
    myClass.showXY();

    return 0;
}

MyClass::MyClass(int x, int y) :
    MyClass(x)  // delegated constructor
{
    this->Y = y;
}

void MyClass::showXY()
{
    std::cout << "X = " << X << "  Y = " << Y << std::endl;
}