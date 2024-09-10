// Program to find the product of digits of a number using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int num, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    do {
        product *= num % 10;
        num /= 10;
    } while (num != 0);

    cout << "Product of digits is " << product << endl;
    return 0;
}
