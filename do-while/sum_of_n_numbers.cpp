// Program to calculate the sum of first n natural numbers using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1;

    cout << "Enter a value for n: ";
    cin >> n;

    do {
        sum += i;
        i++;
    } while (i <= n);

    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
    return 0;
}
