#include "extra.h"
#include <iostream>
#include <array>

class Figure
{
public:
    Figure();
    virtual float getArea() const { return 0.0f; }
    const float PI = 3.1415926f;
};

class Circle : public Figure
{
public:
    explicit Circle(float radius);
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

class Square : public Rectangle //square is a special case of a rectangle
{
public:
    explicit Square(float A);
private:
    float A;
};

int main()
{   
    Circle circle1{1.0f};
    Rectangle rectangle1{2.0f, 3.0f};
    Square square1{2.0f};
    std::cout << "area of the circle = " << circle1.getArea() << std::endl;
    std::cout << "area of the rectangle = " << rectangle1.getArea() << std::endl;
    std::cout << "area of the square = " << square1.getArea() << std::endl;

    std::array<Figure*, 3> pFigures
    {
        &circle1,
        &square1,
        &rectangle1
    };

    for(auto pFigure : pFigures)
    {
        std::cout << "area of the figure = " << pFigure->getArea() << std::endl;
    }
    return 0;
}

Figure::Figure()
{
    std::cout << "Figure constructor is called" << std::endl;
}

Circle::Circle(float radius) :
    radius(radius)
{
    std::cout << "Circle constructor is called" << std::endl;
}

float Circle::getArea() const
{
    return PI * radius * radius; 
}

Rectangle::Rectangle(float A, float B) :
    A(A),
    B(B)
{
    std::cout << "Rectangle constructor is called" << std::endl;
}

float Rectangle::getArea() const
{
    return A * B;
}

Square::Square(float A) :
    Rectangle(A, A)     //the Square constructor must call the Rectangle constructor first
{
    std::cout << "Square constructor is called" << std::endl;
}