#include <iostream>

bool isPrime(int x)
{
    if(x == 1)
        return false;
    for(int i = 2; i < x; i++)
    {
        if(x % i == 0)
            return false;
    }
    return true;
}

int main()
{
    std::cout << "Enter a number 0 through 9: ";
    int x {};
    std::cin >> x;
    while(std::cin.fail() || x >= 9 || x <= 0) {
        if(std::cin.fail())
            std::cout << "Input unrecognisable, please enter again!\n";
        else
            std::cout << "Number out of range, please enter again!\n";    
        std::cin.clear();
        std::cin.ignore(256,'\n'); // This cleans the buffer (\n) from input. 
        std::cin >> x;
    }
    // std::cin >> x;

    if (isPrime(x))
        std::cout << "The digit is prime\n";
    else
        std::cout << "The digit is not prime\n";

    return 0;
}