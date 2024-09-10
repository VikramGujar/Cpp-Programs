// Program to find the LCM (Least Common Multiple) of two numbers using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int a, b, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    lcm = (a > b) ? a : b;

    do {
        if (lcm % a == 0 && lcm % b == 0) {
            cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
            break;
        }
        lcm++;
    } while (true);

    return 0;
}
