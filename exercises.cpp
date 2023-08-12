#include "extra.h"
#include <iostream>

int main()
{
    constexpr size_t Size{80};
    int myArray[Size];
    for(auto& elem : myArray)
    {
        elem = rand() % 10;
        std::cout << elem << ",";
    }
    std::cout << std::endl;

    int first{0};
    int steps{0};
    while(first < Size - 1)
    {
        if(myArray[first] <= myArray[first+1])
        {
            first++;
        }
        else
        {
            int temp = myArray[first+1];
            myArray[first+1] = myArray[first];
            myArray[first] = temp;
            if(first>0)
            {
                first--;
            }
        }
        steps++;
    }

    for(auto elem : myArray)
    {
        std::cout << elem << ",";
    }
    std::cout << std::endl;
    std::cout << "steps=" << steps << std::endl;        
    
    return 0;
}