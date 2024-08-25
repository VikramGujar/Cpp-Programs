// electricity_bill_calculator.cpp
// Program to calculate electricity bill based on unit consumption.

#include <iostream>
#include <iomanip>

int main() {
    int unit;
    double surcharge, bill;

    std::cout << "Enter the electricity units: ";
    std::cin >> unit;

    if (unit <= 50) {
        bill = unit * 0.50;
    } else if (unit <= 150) {
        bill = 50 * 0.50 + (unit - 50) * 0.75;
    } else if (unit <= 250) {
        bill = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    } else {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }

    surcharge = bill * 0.20;
    bill += surcharge;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total Bill = Rs. " << bill << std::endl;

    return 0;
}
