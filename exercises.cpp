#include <iostream>
#include <stdlib.h>

int main()
{
    std::cout << "Gues a number in the range 0-99" << std::endl;

    srand (time(NULL));   // initialize random seed

    int myNumber = rand() % 100;
    int yourNumber = 100;

    do
    {
        std::cout << "Give me a number: ";
        std::cin >> yourNumber;
        if(yourNumber > myNumber)
        {
            std::cout << "your number is too big" << std::endl;
        }
        else if(yourNumber < myNumber)
        {
            std::cout << "your number is too little" << std::endl;
        }
    } while(myNumber != yourNumber);

    std::cout << "Congratulations! You have guessed the number " << myNumber << std::endl;

    return 0;
}