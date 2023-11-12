#include "extra.h"
#include <iostream>
#include <ostream>
#include <math.h>

class Length;
class Point
{
public:
    Point(int x, int y);
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;
    Point operator+(const Point& other) const;
private:
    int x;
    int y;    
    friend std::ostream& operator<<(std::ostream& stream, const Point& point);  //declaration of a friend function
    friend class Length;    //declaration of a friend class
};

class Length
{
public:    
    double calculateLength(const Point& begin, const Point& end) const;
};

std::ostream& operator<<(std::ostream& stream, const Point& point);

int main()
{
    Point A(1,2);
    Point B(3,5);
    Length length;

    std::cout << std::boolalpha << (A == B) << std::endl;
    std::cout << std::boolalpha << (A != B) << std::endl;
    std::cout << "my points: " << A << " , " << B << std::endl;
    std::cout << "addition A+B: " << (A+B) << std::endl;
    std::cout << "section length = " << length.calculateLength(A, B) << std::endl;

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

Point Point::operator+(const Point &other) const
{
    Point sum = *this;
    sum.x = this->x + other.x;
    sum.y = this->y + other.y;
    return sum;
}

//this function is a friend of Point class
std::ostream& operator<<(std::ostream& stream, const Point& point)
{
    stream << "(" << point.x << "," << point.y << ")";  //private members accessible
    return stream;
}

double Length::calculateLength(const Point &begin, const Point &end) const
{
    return sqrt((end.x-begin.x)^2 + (end.y-begin.y)^2); //private members of class Point are accessible 
}
