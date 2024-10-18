// Program to print the Fibonacci series up to N terms.
#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci series: " << a << " " << b << " ";
    int count = 2;
    while (count < n) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
        count++;
    }
    cout << endl;
    return 0;
}
