
// Program to check if a number is an Armstrong number using do-while loop.

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;

    do {
        n++;
        originalNum /= 10;
    } while (originalNum != 0);

    originalNum = num;
    do {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    } while (originalNum != 0);

    if (result == num)
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is not an Armstrong number.\n";

    return 0;
}
