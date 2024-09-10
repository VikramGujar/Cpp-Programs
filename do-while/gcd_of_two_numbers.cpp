// Program to find the GCD of two numbers using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    do {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    } while (a != b);

    cout << "GCD is " << a << endl;
    return 0;
}
