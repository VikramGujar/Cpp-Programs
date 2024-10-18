// Program to calculate the power of a number using a while loop.
#include <iostream>
using namespace std;

int main() {
    int base, exp, result = 1;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    int i = 0;
    while (i < exp) {
        result *= base;
        i++;
    }
    cout << base << " raised to the power " << exp << " is: " << result << endl;
    return 0;
}
