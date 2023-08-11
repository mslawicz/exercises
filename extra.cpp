#include "extra.h"
#include <iostream>

namespace ns1
{
    void hello()
    {
        std::cout << "Hello from namespace 1" << std::endl;
    }
}

namespace ns2
{    void hello()
    {
        std::cout << "Hello from namespace 2" << std::endl;
    }
}