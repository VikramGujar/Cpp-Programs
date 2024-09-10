// Program to count the number of digits in a number using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    do {
        count++;
        num /= 10;
    } while (num != 0);

    cout << "The number has " << count << " digits.\n";
    return 0;
}
