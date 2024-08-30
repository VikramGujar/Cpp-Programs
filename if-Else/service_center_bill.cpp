// service_center.cpp
// This program is designed for a service center that accepts only 2-wheelers, 3-wheelers, and 4-wheelers.
// It calculates the service bill based on the type of issue reported and the age of the vehicle.
// The program handles input validation and provides appropriate messages based on user input.

#include <iostream>
#include <string>

using namespace std;

int main() {
    int wheel, age, issue, bill;
    string ownerName, bikeName;

    // Input vehicle type and age
    cout << "Enter how many wheeler vehicle it is (2, 3, or 4) and the age of your vehicle in months: " << endl;
    cin >> wheel >> age;

    // Validate vehicle type
    if (wheel != 2 && wheel != 3 && wheel != 4) {
        cout << "This service center is not accepting vehicles other than 2-wheelers, 3-wheelers, and 4-wheelers." << endl;
        return 0;
    }

    // Validate vehicle age
    if (age <= 8) {
        cout << "Your vehicle service will be done after a while." << endl;
        return 0;
    }

    // Get user's details
    cout << "Enter your first name and bike name: ";
    cin >> ownerName >> bikeName;

    // Service options
    while (true) {
        cout << "\nChoose a service:" << endl;
        cout << "1) Tyre problem" << endl;
        cout << "2) Fuel problem" << endl;
        cout << "3) Engine issue" << endl;
        cout << "4) General services" << endl;
        cout << "Enter your choice: ";
        cin >> issue;

        switch (issue) {
            case 1:
                {
                    int tyres;
                    cout << "How many tyres are you facing issues with? ";
                    cin >> tyres;
                    bill = 400 * tyres;
                    cout << "\nName of the owner: " << ownerName << endl;
                    cout << "Name of the bike: " << bikeName << endl;
                    cout << "Issue: Tyre problem" << endl;
                    cout << "Bill: Rs. " << bill << endl;
                    break;
                }
            case 2:
                bill = 1500;
                cout << "\nName of the owner: " << ownerName << endl;
                cout << "Name of the bike: " << bikeName << endl;
                cout << "Issue: Fuel problem" << endl;
                cout << "Bill: Rs. " << bill << endl;
                break;
            case 3:
                bill = 5000;
                cout << "\nName of the owner: " << ownerName << endl;
                cout << "Name of the bike: " << bikeName << endl;
                cout << "Issue: Engine issue" << endl;
                cout << "Bill: Rs. " << bill << endl;
                break;
            case 4:
                bill = 1000;
                cout << "\nName of the owner: " << ownerName << endl;
                cout << "Name of the bike: " << bikeName << endl;
                cout << "Issue: General services" << endl;
                cout << "Bill: Rs. " << bill << endl;
                break;
            default:
                cout << "Invalid input. Please enter a valid option." << endl;
                continue; // Restart the loop for valid input
        }
        break; // Exit the loop once a valid option is selected
    }

    return 0;
}
