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

class Rectangle : public Figure
{
public:
    Rectangle(float A, float B);
    float getArea() const;
private:
    float A;
    float B;
};

int main()
{   
    Circle circle1{1.0f};
    Rectangle rectangle1{2.0f, 3.0f};
    std::cout << "area of the circle = " << circle1.getArea() << std::endl;
    std::cout << "area of the rectangle = " << rectangle1.getArea() << std::endl;
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

Rectangle::Rectangle(float A, float B) :
    A(A),
    B(B)
{

}

float Rectangle::getArea() const
{
    return A * B;
}