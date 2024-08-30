// Write a C++ program to print numbers from 1 to n without using a loop.

#include <iostream>

int main() {
    int num, i = 1;
    std::cout << "How many numbers do you want to print: ";
    std::cin >> num;

start:
    std::cout << i << std::endl;
    if (num > i) {
        ++i;
        goto start;
    }

    return 0;
}
