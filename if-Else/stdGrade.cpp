#include <iostream>
using namespace std;

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float totalMarks, percentage;
    char grade;

    cout << "Enter marks for Physics: ";
    cin >> physics;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    cout << "Enter marks for Mathematics: ";
    cin >> mathematics;
    cout << "Enter marks for Computer: ";
    cin >> computer;

    totalMarks = physics + chemistry + biology + mathematics + computer;
    percentage = (totalMarks / 500) * 100;

    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
