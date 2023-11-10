#include "extra.h"
#include <iostream>
#include <ostream>

class Point
{
public:
    Point(int x, int y);
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    Point& operator+(const Point& other);
private:
    int x;
    int y;    
    friend std::ostream& operator<<(std::ostream& stream, const Point& point);  //declaration of a friend function
};

std::ostream& operator<<(std::ostream& stream, const Point& point);

int main()
{
    Point A(1,2);
    Point B(3,4);

    std::cout << std::boolalpha << (A == B) << std::endl;
    std::cout << std::boolalpha << (A != B) << std::endl;
    std::cout << "my points: " << A << " , " << B << std::endl;
    std::cout << "addition A+B: " << (A+B) << std::endl;

    return 0;
}

Point::Point(int x, int y) :
    x(x),
    y(y)
    {

    }

bool Point::operator==(const Point& other) const
{
    return (x == other.x) && (y == other.y);
}

bool Point::operator!=(const Point& other) const
{
    return !(*this == other);   //not-equality uses equality operator
}

Point &Point::operator+(const Point &other)
{
    x += other.x;
    y += other.y;
    return *this;
}

//this function is a friend of Point class
std::ostream& operator<<(std::ostream& stream, const Point& point)
{
    stream << "(" << point.x << "," << point.y << ")";  //private members accessible
    return stream;
}