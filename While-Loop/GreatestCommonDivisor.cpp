// Program to find the greatest common divisor (GCD) of two numbers.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    cout << "GCD is: " << a << endl;
    return 0;
}
