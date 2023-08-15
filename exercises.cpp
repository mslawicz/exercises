#include "extra.h"
#include <iostream>

struct Figure
{
    std::string color;
    unsigned int area;
    bool isBig()
    {
        return area > 150 ? true : false;
    }
    bool isBigger(const Figure& other)
    {
        return area > other.area;
    }
};

int main()
{
    Figure rectangle{"yellow", 200};
    Figure triangle{.color = "red", .area = 100};

    //structured binding
    auto [myColor, myArea] = triangle;
    std::cout << "color=" << myColor << std::endl;
    std::cout << "is it big? " << std::boolalpha << triangle.isBig() << std::endl;
    std::cout << "is it bigger? " << std::boolalpha << triangle.isBigger(rectangle) << std::endl;

    return 0;
}