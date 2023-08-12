#include "extra.h"
#include <iostream>
#include <array>

int main()
{
    int myArray[] {1,2,3};

    std::cout << "Number of elements = " << ArraySize(myArray) << std::endl;

    for(auto& element : myArray)
    {
        if(element == 2)
        {
            element = 100;
        }

        std::cout << element << ",";
    }
    std::cout << std::endl;

    //another way of displaying number of elements
    std::cout << "Number of elements = " << std::size(myArray) << std::endl;

    const size_t mySize{4};
    std::array<int, mySize> myStdArray{10,11,12,13};
    for(auto& element : myStdArray)
    {
        if(element == 12)
        {
            element = 1234;
        }

        std::cout << element << ",";
    }
    std::cout << std::endl;
    std::cout << "myStdArray size = " << myStdArray.size() << std::endl;

    return 0;
}