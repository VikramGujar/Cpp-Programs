#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int i = 1;
    do {
        cout << number << " * " << i << " = " << number * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}
