// Finding the given alfabate is lower case or upper case 



#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "Enter an alphabet character to identify: ";
    cin >> a;

    if (a >= 'A' && a <= 'z') {
        if (a >= 'A' && a <= 'Z') {
            cout << "is UpperCase" << endl;
        } else if (a >= 'a' && a <= 'z') {
            cout << "is LowerCase" << endl;
        }
    } else {
        cout << "Not an alphabet" << endl;
    }

    return 0;
}
