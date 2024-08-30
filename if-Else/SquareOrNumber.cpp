// Write a C++ program by taking one integer value from the user. 
// If the given number's last digit is smaller than 5, then print the square of that number;
// else, print that same number.

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number: ";
    std::cin >> n;

    if (n % 10 < 5) {
        std::cout << "Square of " << n << " = " << n * n << std::endl;
    } else {
        std::cout << "Number = " << n << std::endl;
    }

    return 0;
}
