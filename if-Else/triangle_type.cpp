// triangle_type.cpp
// Program to check whether the triangle is an equilateral, isosceles, or scalene triangle using if-else statements.

#include <iostream>

int main() {
    int sideA, sideB, sideC;
    std::cout << "Enter the lengths of the sides of the triangle:\n";
    std::cin >> sideA >> sideB >> sideC;

    if (sideA == sideB && sideA == sideC) {
        std::cout << "The triangle is an equilateral triangle.\n";
    } else if (sideA == sideB || sideA == sideC || sideB == sideC) {
        std::cout << "The triangle is an isosceles triangle.\n";
    } else {
        std::cout << "The triangle is a scalene triangle.\n";
    }

    return 0;
}
