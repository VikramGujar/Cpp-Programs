// Program to check if a number is prime using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int num, i = 2;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    do {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    } while (i <= num / 2);

    if (isPrime && num > 1)
        cout << num << " is a prime number.\n";
    else
        cout << num << " is not a prime number.\n";

    return 0;
}
