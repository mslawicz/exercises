#include "extra.h"
#include <iostream>

int main()
{
    std::string xstr = R"(C:\temp\x)";
    std::cout << "path=" << xstr;
    return 0;
}