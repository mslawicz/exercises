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
    catch(const std::invalid_argument& exception)   //invalid_argument exception is cought
    {
        std::cerr << "do sth important here and rethrow exception" << '\n';
        throw;
    }
    catch(const std::out_of_range& exception)   //out_of_range exception is cought
    {
        std::cerr << "Minor error: " << exception.what() << '\n';
    }    
}

int main()
{   
    try
    {
        makeCircle(1.0f);   //no exception
        makeCircle(11.0f);  //minor exception
        makeCircle(-1.0f);  //serious exception
    }
    catch(const std::exception& ex)   //invalid_argument exception is cought
    {
        std::cerr << "Serious error in main function: " << ex.what() << '\n';
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
