// Program to print all even numbers from 1 to N.
#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Even numbers from 1 to " << n << " are: ";
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    return 0;
}
