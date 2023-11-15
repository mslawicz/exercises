#include "extra.h"
#include <iostream>
class Point
{
public:
    Point(int x) : x(x) {}
    Point& operator++() { x++; return *this; }  //pre-increment operator
    Point operator++(int) { Point copy(this->x); operator++(); return copy; } //post-incremental operator
    int getX() const { return x; }
private:
    int x;
};

int main()
{
    Point A(10);
    std::cout << A.getX() << std::endl;
    Point B(0);
    B = A++;
    std::cout << A.getX() << std::endl;
    std::cout << B.getX() << std::endl;
    B = ++A;
    std::cout << B.getX() << std::endl;        

    return 0;
}

