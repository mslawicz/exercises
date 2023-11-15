#include "extra.h"
#include <iostream>
class Point
{
public:
    Point(int x) : x(x) {}
    Point(const Point& other) { std::cout << "copy constructor " << std::endl; this->x = other.x; }
    Point& operator=(const Point& other) { std::cout << "assignment operator" << std::endl; this->x = other.x; return *this; }
private:
    int x;
};

int main()
{
    Point A(1);

    Point B = A;    // copy operator
    Point C(3);
    C = B;  // assignment operator

    return 0;
}

