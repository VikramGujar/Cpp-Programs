// Program to print Fibonacci series up to n terms using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    int count = 0;
    do {
        if (count == 0) {
            nextTerm = t1;
        } else if (count == 1) {
            nextTerm = t2;
        } else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << nextTerm << " ";
        count++;
    } while (count < n);

    return 0;
}
