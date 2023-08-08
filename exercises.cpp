#include <iostream>

int main()
{
    char ch{'x'};
    std::cout << ch << " " << +ch << std::endl;  // plus sign pefix prints char as a number

    std::string name;
    std::cout << "What's your name?";
    std::getline(std::cin, name);
    std::cout << "Hello " << name <<std::endl;

    return 0;
}