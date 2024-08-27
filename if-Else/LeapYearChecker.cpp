/*
    Title: Leap Year Checker

    Description:
    Design a program that takes a year as input and determines whether
    it is a leap year or not. The leap year rules are as follows:
    - A year is a leap year if it is divisible by 4.
    - However, if the year is divisible by 100, it is not a leap year unless it is also divisible by 400.

    The program uses if-else statements to provide the appropriate output.
*/

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter the year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
