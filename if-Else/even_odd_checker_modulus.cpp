// even_odd_checker_modulus.cpp
// Program to determine if a number is even or odd using the modulus operator.

#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << "Even Number" << std::endl;
    } else {
        std::cout << "Odd Number" << std::endl;
    }

    return 0;
}
