// Program to find the factorial of a number.
#include <iostream>
using namespace std;

int main() {
    int n, fact = 1, i = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (i <= n) {
        fact *= i;
        i++;
    }
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}
