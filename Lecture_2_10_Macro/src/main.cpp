#include <iostream>

void doSomething(); // forward declaration for function doSomething()

#define PRINT_JOE
#define FOO 9 // Here's a macro substitution
#define PRINT

void foo()
{
#define MY_NAME "Alex"
}

int main()
{
    #ifdef PRINT_JOE
        std::cout << "Joe ifdef\n"; // will be compiled since PRINT_JOE is defined
    #endif

    #ifdef PRINT_BOB
        std::cout << "Bob ifdef\n"; // will be ignored since PRINT_BOB is not defined
    #endif

    #ifndef PRINT_BOB
        std::cout << "Bob ifndef\n";
    #endif

    #if 0 // Don't compile anything starting here
        std::cout << "Steve\n";
        /* Some
        * multi-line
        * comment here
        */
    #endif // until this point

    #ifdef FOO // This FOO does not get replaced because it’s part of another preprocessor directive
        std::cout << FOO << '\n'; // This FOO gets replaced with 9 because it's part of the normal code
    #endif

    std::cout << "My name is: " << MY_NAME << '\n';

    doSomething();

    return 0;
}