/*
    Title: Interactive Tea Stall Experience

    Introduction:
    Imagine strolling down a charming street, enticed by the inviting aroma of freshly brewed beverages.
    You arrive at a cozy tea stall, greeted by a friendly attendant. Prepare for an interactive journey through the Tea Stall Counter!

    Scenario:
    Welcome and Menu:
    You enter the tea stall, warmly welcomed by the attendant:

    Attendant: "Welcome to our Tea Stall Counter! Our menu:"

    Tea --------------------- Rs. 10
    Coffee ------------------ Rs. 20
    Cold coffee ------------- Rs. 50
    Exit
    Attendant: "Choose by entering a number (1-4):"

    [User enters choice]

    Customize Order:
    Based on your choice, the attendant guides you:

    [If choice is 1:]
    Attendant: "How many cups of refreshing tea?"

    [If choice is 2:]
    Attendant: "How many cups of aromatic coffee?"

    [If choice is 3:]
    Attendant: "How many cups of chilled cold coffee?"

    [User enters quantity]
    Total and Payment:
    The attendant shares your order total and awaits payment:

    Attendant: "Total for [quantity] cup(s): Rs. [total_price]."

    Attendant: "Enter your payment amount: Rs."

    [User enters amount_paid]

    Attendant: "Change: Rs. [change]."

    Continuation or Farewell:
    Choose to explore more or conclude your visit:

    Attendant: "Explore more or finalize? (Type 'Y' for Yes or 'N' for No):"

    [User enters order_again]

    [If user wants to continue:]
    Attendant: "Certainly, let's explore."

    [If user doesn't want to continue:]
    Attendant: "Thank you for visiting! We look forward to serving you again soon!"
*/

#include <iostream>
using namespace std;

int main() {
    int choice, tea, coffee, coldCoffee, totalPrice, userAmount, change;
    char yesNo;

start:
    cout << "Welcome to our Tea Stall Counter! \n";
    cout << "Our menu \n";
    cout << "Enter-1. Tea --------------------- Rs. 10 \n";
    cout << "Enter-2. Coffee ------------------ Rs. 20 \n";
    cout << "Enter-3. Cold coffee ------------- Rs. 50 \n";

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "How many cups of refreshing tea? \n";
        cin >> tea;
        totalPrice = 10 * tea;
        cout << "Total for [" << tea << "] cup(s): Rs. [" << totalPrice << "] \n";
    } 
    else if (choice == 2) {
        cout << "How many cups of aromatic coffee? \n";
        cin >> coffee;
        totalPrice = 20 * coffee;
        cout << "Total for [" << coffee << "] cup(s): Rs. [" << totalPrice << "] \n";
    } 
    else if (choice == 3) {
        cout << "How many cups of chilled cold coffee? \n";
        cin >> coldCoffee;
        totalPrice = 50 * coldCoffee;
        cout << "Total for [" << coldCoffee << "] cup(s): Rs. [" << totalPrice << "] \n";
    } 
    else {
        cout << "You entered the wrong choice.\n";
        return 0;
    }

payAgain:
    cout << "\nEnter your payment amount: Rs. ";
    cin >> userAmount;

    if (userAmount < totalPrice) {
        cout << "You are paying less amount than the bill.\n";
        goto payAgain;
    }

    change = userAmount - totalPrice;
    cout << "\nChange: Rs. [" << change << "]\n";

    cout << "Explore more or finalize? (Type 'Y' for Yes or 'N' for No): ";
    cin >> yesNo;

    if (yesNo == 'Y' || yesNo == 'y') {
        goto start;
    } else {
        cout << "Thank you for visiting! We look forward to serving you again soon!\n";
    }

    return 0;
}
