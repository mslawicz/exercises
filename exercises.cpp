#include "extra.h"
#include <iostream>
#include <fstream>


int main()
{
    std::ofstream myFile;
    myFile.open("C:/temp/myFile.bin", std::ios::binary);
    if(myFile.is_open())
    {
        double PI = 3.14159;
        myFile.write(reinterpret_cast<char*>(&PI), sizeof(PI));
        myFile.close();
    }
    else
    {
        std::cout << "file open error" << std::endl;
    }

    //read the created file
    std::ifstream file2read;
    file2read.open("C:/temp/myFile.bin", std::ios::binary);
     if(file2read.is_open())
    {
        double myDouble{0};
        file2read.read(reinterpret_cast<char*>(&myDouble), sizeof(myDouble));
        std::cout << "the value read from a file: " << myDouble;
        file2read.close();
    }
    else
    {
        std::cout << "file open for reading error" << std::endl;
    }   
    

    return 0;
}