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
    Circle circle1{1.0f};
    Circle circle2(-2.0f);
    
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
}

float Circle::getArea() const
{
    return PI * radius * radius; 
}
