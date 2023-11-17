#include "extra.h"
#include <iostream>

class Figure
{
public:
    virtual float getArea() const { return 0.0f; }
    const float PI = 3.1415926f;
};

class Circle : public Figure
{
public:
    Circle(float radius);
    float getArea() const;
private:
    float radius;
};

int main()
{   
    Circle circle1{1.0f};
    std::cout << circle1.getArea() << std::endl;
    return 0;
}

Circle::Circle(float radius) :
    radius(radius)
{

}

float Circle::getArea() const
{
    return PI * radius * radius; 
}
