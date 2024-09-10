// Program to convert a decimal number to binary using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int num, binary = 0, place = 1;

    cout << "Enter a decimal number: ";
    cin >> num;

    do {
        int rem = num % 2;
        binary += rem * place;
        place *= 10;
        num /= 2;
    } while (num > 0);

    cout << "Binary representation is: " << binary << endl;
    return 0;
}
