// Write a C program that will ask for a person’s name and his/her game score.
// Then it will ask for a second person’s name and score.
//  The program will print the winner’s name and also print by how many 
// points that person won by comparing the scores. Develop this program by using switch case.


#include <iostream>
#include <cstring>  // For using string functions
using namespace std;

int main() {
    char p1name[10], p2name[10];
    int p1score, p2score, diff;

    cout << "Player-1 Enter Your Name and Score in the Game:\n";
    cin >> p1name;
    cin >> p1score;

    cout << "Player-2 Enter Your Name and Score in the Game:\n";
    cin >> p2name;
    cin >> p2score;

    int caseIdentifier = (p1score > p2score) ? 1 : (p2score > p1score) ? 2 : 0;

    switch (caseIdentifier) {
        case 1:
            cout << "Player-1 is the winner\n";
            diff = p1score - p2score;
            cout << "Congratulations!!! " << p1name << "\n";
            cout << "You won by " << diff << " points" << endl;
            break;
        case 2:
            cout << "Player-2 is the winner\n";
            diff = p2score - p1score;
            cout << "Congratulations!!! " << p2name << "\n";
            cout << "You won by " << diff << " points" << endl;
            break;
        default:
            cout << "Congratulations!!!\n";
            cout << "You both got the same points\n";
            cout << "YOU BOTH ARE WINNERS!!!" << endl;
            break;
    }

    return 0;
}
