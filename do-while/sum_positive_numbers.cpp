#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    do {
        cout << "Enter a positive number (negative to stop): ";
        cin >> number;
        if (number > 0) {
            sum += number;
        }
    } while (number > 0);

    cout << "Sum of positive numbers: " << sum << endl;
    return 0;
}
