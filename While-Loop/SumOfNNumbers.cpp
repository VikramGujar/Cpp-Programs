// Program to calculate the sum of the first N natural numbers.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;
    cout << "Enter a positive integer: ";
    cin >> n;
    while (i <= n) {
        sum += i;
        i++;
    }
    cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;
    return 0;
}

