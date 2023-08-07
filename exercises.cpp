#include <iostream>

int main()
{
    std::cout << "Hello X1 Carbon" << std::endl;

    auto f1{1.0F};
    auto d1{1.0};

    std::cout << f1 << " == " << d1 << " ? ... " << ((f1 == d1) ? "true" : "false");

    return 0;
}