// Program to calculate the power of a number using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int base, exp, result = 1;

    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    int count = 0;
    do {
        result *= base;
        count++;
    } while (count < exp);

    cout << base << " raised to the power " << exp << " is " << result << endl;
    return 0;
}
