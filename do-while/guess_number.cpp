// Program for a number guessing game using do-while loop.

#include<iostream>
using namespace std;

int main() {
    int secretNum = 7, guess;

    do {
        cout << "Guess the number (between 1 and 10): ";
        cin >> guess;
        if (guess != secretNum) {
            cout << "Wrong! Try again.\n";
        }
    } while (guess != secretNum);

    cout << "Congratulations! You guessed the number.\n";
    return 0;
}
