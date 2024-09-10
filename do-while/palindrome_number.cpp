// Program to check if a number is a palindrome using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, originalNum, digit;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;
    do {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    } while (num != 0);

    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome.\n";
    else
        cout << originalNum << " is not a palindrome.\n";

    return 0;
}
