#include "extra.h"
#include <iostream>

class MyClass
{
public:
    explicit MyClass(int x) {this->X = x;}
    MyClass(const MyClass& source)    // copy constructor
    {
        this->X = source.X * 2;
    }
    void showX();
private:    
    int X{0};
};

void myFunction(MyClass copiedObject)    // object copy is being made here
{
    copiedObject.showX();
}


int main()
{
    MyClass myClass(10);
    myFunction(myClass);    // this object is being copied

    return 0;
}

void MyClass::showX()
{
    std::cout << "X = " << X << std::endl;
}