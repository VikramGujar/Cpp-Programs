// Find the input is special character or not


#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an input to identify: ";
    cin >> ch;

    if((ch >= '1' && ch <= '9') || (ch >= 'A' && ch <= 'z'))
        cout << "Input is not a special character" << endl;
    else 
        cout << "It's a special character" << endl;

    return 0;
}
