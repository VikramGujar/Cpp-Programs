// Write a C program to accept id from user and display department.

// Id: 11 to 15 is Software department

//   16 to 20 is Developer department

//   21 to 23 is Management department


#include <iostream>
using namespace std;

int main() {
    int id;
    cout << "Enter your ID: ";
    cin >> id;

    switch (id) {
        case 11: case 12: case 13: case 14: case 15:
            cout << "Your Department is Software department" << endl;
            break;
        case 16: case 17: case 18: case 19: case 20:
            cout << "Your Department is Developer department" << endl;
            break;
        case 21: case 22: case 23:
            cout << "Your Department is Management department" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }

    return 0;
}
