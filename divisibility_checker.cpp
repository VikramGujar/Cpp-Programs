// divisibility_checker.cpp
// Program to check if the first number is divisible by the second number.

#include <iostream>

int main() {
    int first, second;

    std::cout << "Enter two numbers: ";
    std::cin >> first >> second;

    if (second != 0) {
        if (first % second == 0) {
            std::cout << first << " is divisible by " << second << ".\n";
        } else {
            std::cout << first << " is not divisible by " << second << ".\n";
        }
    } else {
        std::cout << "Division by zero is not allowed.\n";
    }

    return 0;
}
