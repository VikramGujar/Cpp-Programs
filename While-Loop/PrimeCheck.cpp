// Program to check if a number is prime or not.
#include <iostream>
using namespace std;

int main() {
    int n, i = 2;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;
    while (i <= n / 2) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }
    if (isPrime && n > 1) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}
