// Program to check if a number is a perfect number using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int num, sum = 0, i = 1;

    cout << "Enter a number: ";
    cin >> num;

    do {
        if (num % i == 0)
            sum += i;
        i++;
    } while (i <= num / 2);

    if (sum == num)
        cout << num << " is a perfect number.\n";
    else
        cout << num << " is not a perfect number.\n";

    return 0;
}
