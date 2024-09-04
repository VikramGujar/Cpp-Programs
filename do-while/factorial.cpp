#include <iostream>
using namespace std;

int main() {
    int number, factorial = 1;
    cout << "Enter a number: ";
    cin >> number;

    int i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= number);

    cout << "Factorial: " << factorial << endl;
    return 0;
}
