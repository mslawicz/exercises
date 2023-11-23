#include "extra.h"
#include <iostream>
#include <array>
#include <memory>

class Circle
{
public:
    explicit Circle(float radius);
    float getArea() const;
private:
    float radius;
    const float PI = 3.1415926;
};

int main()
{   
    try
    {
        Circle circle1{1.0f};   //this line does not throw an exception
        Circle circle2(-2.0f);  //this line throws an exception
    }
    catch(const std::invalid_argument& exception)   //invalid_argument exception is cought only
    {
        std::cerr << "invalid argument in " << exception.what() << '\n';
    }
    
    std::cout << "function main is complete" << std::endl;
    return 0;
}

Circle::Circle(float radius) :
    radius(radius)
{
    std::cout << "Circle constructor is called" << std::endl;
    if(radius <= 0)
    {
        throw std::invalid_argument{"radius"};
    }
    std::cout << "Circle constructor is complete" << std::endl;
}

float Circle::getArea() const
{
    return PI * radius * radius; 
}
