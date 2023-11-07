#include "extra.h"
#include <iostream>

class Point
{
public:
    Point(int x, int y);
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
private:
    int x;
    int y;    
};

int main()
{
    Point A(1,2);
    Point B(3,4);

    std::cout << std::boolalpha << (A == B) << std::endl;
    std::cout << std::boolalpha << (A != B) << std::endl;

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