#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout << "Hello X1 Carbon" << std::endl;

    srand(time(nullptr));

    for(int k=0; k<10; k++)
    {
        std::cout << rand() % 6 + 1 << ",";
    }

    std::cout << std::endl;

    return 0;
}