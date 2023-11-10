#include "extra.h"
#include <iostream>
#include <ostream>

class Point
{
public:
    Point(int x, int y);
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    int getX() const { return x; }
    int getY() const { return y; }
private:
    int x;
    int y;    
};

std::ostream& operator<<(std::ostream& stream, const Point& point);

int main()
{
    Point A(1,2);
    Point B(3,4);

    std::cout << std::boolalpha << (A == B) << std::endl;
    std::cout << std::boolalpha << (A != B) << std::endl;
    std::cout << "my points: " << A << " , " << B << std::endl;

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

std::ostream& operator<<(std::ostream& stream, const Point& point)
{
    stream << "(" << point.getX() << "," << point.getY() << ")";
    return stream;
}