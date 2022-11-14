#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;
}

char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or / ";
    char operation{};
    std::cin >> operation;
    return operation;
}

double calculate(double x, char operation, double y)
{
    switch (operation) {  
    case '+': return x + y;
    case '-': return x - y;
    case '*': return x * y;
    case '/': return x / y;
    default: throw std::runtime_error("No such operator");
    }
}

void printResult(double x, char operation, double y)
{
    std::cout << x << " " << operation << " " << y << " is " << calculate(x, operation, y) << '\n';
}

int main()
{
    double x { getDouble() };
    double y { getDouble() };

    char operation { getOperator() };

    printResult(x, operation, y);

    return 0;
}