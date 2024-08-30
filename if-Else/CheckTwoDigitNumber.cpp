// Finding if the number is a two-digit number or not


#include <iostream>

int main() {
    int num;
    std::cout << "Enter number to verify: ";
    std::cin >> num;

    if (num <= 99 && num >= 10) {
        std::cout << "It is a Two-digit number" << std::endl;
    } else {
        std::cout << "It's not a Two-digit number" << std::endl;
    }

    return 0;
}
