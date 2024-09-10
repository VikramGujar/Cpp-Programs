// Program to find the maximum number among a set of numbers using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int n, num, maxNum;

    cout << "Enter the number of elements: ";
    cin >> n;

    int i = 1;
    do {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (i == 1 || num > maxNum)
            maxNum = num;
        i++;
    } while (i <= n);

    cout << "Maximum number is: " << maxNum << endl;
    return 0;
}
