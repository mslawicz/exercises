#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::left << std::setw(15) << "Course" << std::setw(15) << "Students" << std::endl;

    std::cout << std::left << std::setw(15) << "C++" << std::right << std::setw(15) << 100 << std::endl;

    std::cout << std::left << std::setw(15) << "JavaScript" << std::right << std::setw(15) << 50 << std::endl;

    return 0;
}