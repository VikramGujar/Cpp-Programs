// biggest_number.cpp
// Program to get the biggest number from given three numbers.

#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    if (a == b && b == c) {
        std::cout << "All are equal" << std::endl;
    } else if (a > b && a > c) {
        std::cout << "a is the biggest" << std::endl;
    } else if (a == b && c < b) {
        std::cout << "a and b are the biggest" << std::endl;
    } else if (a == c && b < a) {
        std::cout << "a and c are the biggest" << std::endl;
    } else if (c == b && a < b) {
        std::cout << "c and b are the biggest" << std::endl;
    } else if (b > c) {
        std::cout << "b is the biggest" << std::endl;
    } else {
        std::cout << "c is the biggest" << std::endl;
    }

    return 0;
}
