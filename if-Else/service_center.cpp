#include <iostream>
#include <string>

int main() {
    int wheel, age, issue, bill;
    std::string name, bikeName;

    std::cout << "Enter how many wheeler vehicle it is (2, 3, or 4) and the age of your vehicle in months: \n";
    std::cin >> wheel >> age;

    // Validate the type of vehicle
    if (wheel != 2 && wheel != 3 && wheel != 4) {
        std::cout << "This service center is not accepting vehicles other than 2-wheelers, 3-wheelers, and 4-wheelers.\n";
        return 0;
    }

    // Validate the age of the vehicle
    if (age <= 8) {
        std::cout << "Your vehicle service will be done after a while.\n";
        return 0;
    }

    // Get the user's details
    std::cout << "Enter your first name and bike name: ";
    std::cin >> name >> bikeName;

    // Service options
    do {
        std::cout << "\nChoose a service:\n";
        std::cout << "1) Tyre problem\n";
        std::cout << "2) Fuel problem\n";
        std::cout << "3) Engine issue\n";
        std::cout << "4) General services\n";
        std::cout << "Enter your choice: ";
        std::cin >> issue;

        switch (issue) {
            case 1: {
                int tyres;
                std::cout << "How many tyres are you facing issues with? ";
                std::cin >> tyres;
                bill = 400 * tyres;
                std::cout << "\nName of the owner: " << name << std::endl;
                std::cout << "Name of the bike: " << bikeName << std::endl;
                std::cout << "Issue: Tyre problem" << std::endl;
                std::cout << "Bill: Rs. " << bill << std::endl;
                break;
            }
            case 2:
                bill = 1500;
                std::cout << "\nName of the owner: " << name << std::endl;
                std::cout << "Name of the bike: " << bikeName << std::endl;
                std::cout << "Issue: Fuel problem" << std::endl;
                std::cout << "Bill: Rs. " << bill << std::endl;
                break;
            case 3:
                bill = 5000;
                std::cout << "\nName of the owner: " << name << std::endl;
                std::cout << "Name of the bike: " << bikeName << std::endl;
                std::cout << "Issue: Engine issue" << std::endl;
                std::cout << "Bill: Rs. " << bill << std::endl;
                break;
            case 4:
                bill = 1000;
                std::cout << "\nName of the owner: " << name << std::endl;
                std::cout << "Name of the bike: " << bikeName << std::endl;
                std::cout << "Issue: General services" << std::endl;
                std::cout << "Bill: Rs. " << bill << std::endl;
                break;
            default:
                std::cout << "Invalid input. Please enter a valid option.\n";
        }
    } while (issue < 1 || issue > 4);

    return 0;
}
