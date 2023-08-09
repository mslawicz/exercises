#include <iostream>
#include <iomanip>

int main()
{
    std::string name{"Marcin"};

    for(auto ch : name)
    {
        // write characters in 2-digit hex notation
        std::cout << std::hex << std::setw(2) << std::setfill('0') << +ch;
    }

    return 0;
}