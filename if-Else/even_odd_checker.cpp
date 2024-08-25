// even_odd_checker.cpp
// Program to determine if a number is even or odd without using arithmetic operators.

#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if ((num & 1) == 0) {
        std::cout << "Even Number" << std::endl;
    } else {
        std::cout << "Odd Number" << std::endl;
    }

    return 0;
}
