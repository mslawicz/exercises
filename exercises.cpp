#include "extra.h"
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> pX(new int);

    *pX = 100;
    *pX += 2;
    std::cout << "*" << pX.get() << "==" << *pX << std::endl;

    // aritmetic operations not available: pX+=10;

    //another way of creating unique pointer:
    auto pY = std::make_unique<int>();
    // cannot assign a new value: pY = pX;
    auto myArray = std::make_unique<float[]>(10);
    myArray[9] = 123.45;

    //no need to delete the pointer allocated memory

    //shared pointer:
    auto pA = std::make_shared<int>();
    auto pB(pA);
    std::cout << pA.get() << "==" << pB.get() << std::endl;

    return 0;
}