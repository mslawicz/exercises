#include "extra.h"
#include <iostream>

struct Figure
{
    std::string color;
    unsigned int area;
};

int main()
{
    Figure rectangle{"yellow", 200};
    Figure triangle{.color = "red", .area = 100};

    //structured binding
    auto [myColor, myArea] = triangle;
    std::cout << "color=" << myColor;

    return 0;
}