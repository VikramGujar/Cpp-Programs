// digit_checker.cpp
// Program to check if the given input is a digit or not.

#include <iostream>

int main() {
    char n;
    std::cout << "Enter an input to identify: ";
    std::cin >> n;

    if (n >= '0' && n <= '9') {
        std::cout << "It is a digit.\n";
    } else {
        std::cout << "Not a digit.\n";
    }

    return 0;
}
