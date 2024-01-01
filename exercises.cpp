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

void makeCircle(float radius)
{
    try
    {
        Circle circle{radius};
    }
    catch(const std::logic_error& exception)   //any radius-related exception is cought
    {
        std::cerr << "radius error: " << exception.what() << '\n';
    }
}

int main()
{   
    makeCircle(1.0f);   //no exception
    makeCircle(-1.0f);  //exception
    makeCircle(11.0f);  //another exception

    std::cout << "function main is complete" << std::endl;
    return 0;
}

Circle::Circle(float radius) :
    radius(radius)
{
    std::cout << "Circle constructor is called" << std::endl;
    if(radius <= 0)
    {
        throw std::invalid_argument{"radius negative!"};
    }
    else if(radius > 10)
    {
        throw std::out_of_range{"radius too big"};
    }
    std::cout << "Circle constructor is complete" << std::endl;
}

float Circle::getArea() const
{
    return PI * radius * radius; 
}
