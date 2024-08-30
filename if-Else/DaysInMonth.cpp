// Write a C program to enter month number between(1-12) and print number of days in month using if else. How to print number of days in a given month using if else in C programming. Logic to find number of days in a month in C program


#include <iostream>

int main() {
    int month;
    std::cout << "Enter month number (1-12): ";
    std::cin >> month;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        std::cout << "31 days" << std::endl;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        std::cout << "30 days" << std::endl;
    } else if (month == 2) {
        std::cout << "28/29 days" << std::endl;
    } else {
        std::cout << "Invalid month number!" << std::endl;
    }

    return 0;
}
