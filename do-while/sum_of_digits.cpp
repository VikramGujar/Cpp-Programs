#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;

    do {
        sum += number % 10;
        number /= 10;
    } while (number > 0);

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
