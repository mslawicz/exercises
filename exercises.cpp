#include "extra.h"
#include <iostream>
#include <fstream>


int main()
{
    std::ofstream myFile;
    myFile.open("C:/temp/myFile.txt");
    if(myFile.is_open())
    {
        std::string myText{"my text written to my file\n"};
        //first version: myFile.write(myText.c_str(), myText.length());
        myFile << myText;   //second version
        myFile.close();
    }
    else
    {
        std::cout << "file open error" << std::endl;
    }

    //read the created file
    std::ifstream file2read;
    file2read.open("C:/temp/myFile.txt");
     if(file2read.is_open())
    {
        std::string myText;
        std::getline(file2read, myText);
        std::cout << "the text read from a file: " << myText;
        file2read.close();
    }
    else
    {
        std::cout << "file open for reading error" << std::endl;
    }   
    

    return 0;
}