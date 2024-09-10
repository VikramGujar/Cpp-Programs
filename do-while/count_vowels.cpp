// Program to count the number of vowels in a string using do-while loop.

#include<iostream>
using namespace std;

int main() {
    string str;
    int i = 0, vowelCount = 0;

    cout << "Enter a string: ";
    cin >> str;

    do {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
        i++;
    } while (i < str.length());

    cout << "Number of vowels in the string: " << vowelCount << endl;
    return 0;
}
