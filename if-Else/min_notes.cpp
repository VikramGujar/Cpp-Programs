// min_notes.cpp
// Write a C++ program to input amount from user and print minimum number of
// notes (Rs. 500, 100, 50, 20, 10, 5, 2, 1) required for the amount.
// Program to find minimum number of notes required for the given denomination. 
// Logic to find minimum number of denomination for a given amount in C++ program.

#include <iostream>

int main() {
    int amount;
    std::cout << "Enter amount: ";
    std::cin >> amount;

    if (amount / 500 != 0) std::cout << "Rs. 500 notes: " << amount / 500 << std::endl;
    amount = amount % 500;
    if (amount / 200 != 0) std::cout << "Rs. 200 notes: " << amount / 200 << std::endl;
    amount = amount % 200;
    if (amount / 100 != 0) std::cout << "Rs. 100 notes: " << amount / 100 << std::endl;
    amount = amount % 100;
    if (amount / 50 != 0) std::cout << "Rs. 50 notes: " << amount / 50 << std::endl;
    amount = amount % 50;
    if (amount / 20 != 0) std::cout << "Rs. 20 notes: " << amount / 20 << std::endl;
    amount = amount % 20;
    if (amount / 10 != 0) std::cout << "Rs. 10 notes: " << amount / 10 << std::endl;
    amount = amount % 10;
    if (amount / 5 != 0) std::cout << "Rs. 5 notes: " << amount / 5 << std::endl;
    amount = amount % 5;
    if (amount / 2 != 0) std::cout << "Rs. 2 notes: " << amount / 2 << std::endl;
    amount = amount % 2;
    if (amount / 1 != 0) std::cout << "Rs. 1 notes: " << amount / 1 << std::endl;

    return 0;
}
