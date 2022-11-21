#include <iostream>

int main() {
    void swap(int* x, int* y);

    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;

    if (smaller > larger)
    {
        std::cout << "Swapping the values\n";
        swap(&smaller, &larger);
    }

    std::cout << "The smaller value is: " << smaller << '\n';
    std::cout << "The larger value is: " << larger << '\n';

    return 0;
}