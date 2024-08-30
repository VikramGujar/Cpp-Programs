// Write a C++ program to calculate the salary and based on that salary, calculate the tax for the person
// based on their designation by following the rules below:

// * 3 Types of Designations:
//  -> Developer (Indicated by D or d)
//  -> Trainer   (Indicated by T or t)
//  -> Manager   (Indicated by M or m)

// [Note - For wrong designation, print a message as "Invalid input".]

// * 3 Types of Extra Allowances:
//  Home Allowance  = 10000
//  Food Allowance  = 3000
//  Travel Allowance = 10000

// * If the designation is Developer, the salary will be calculated by adding:
//  Total Salary = Salary + Home Allowance

// * If the designation is Trainer, the salary will be calculated by adding:
//  Total Salary = Salary + Home Allowance + Food Allowance

// * If the designation is Manager, the salary will be calculated by adding:
//  Total Salary = Salary + Home Allowance + Food Allowance + Travel Allowance

// * If the Total Salary is greater than 40000, calculate the tax as 10% of the total salary
//  else 5% of total salary.

// [Note: Take the designation and salary from the user, calculate the total salary, and based on that, calculate the tax.]

#include <iostream>

int main() {
    char Designation; // Developer, Trainer, Manager
    int basic_salary, total_salary;
    int Home_Allowance = 10000, Food_Allowance = 3000, Travel_Allowance = 10000;
    float tax;

    std::cout << "Enter your Designation (D/d for Developer, T/t for Trainer, M/m for Manager): ";
    std::cin >> Designation;

    std::cout << "Enter your basic salary: ";
    std::cin >> basic_salary;

    switch (Designation) {
        case 'D': case 'd':
            total_salary = basic_salary + Home_Allowance;
            break;
        case 'T': case 't':
            total_salary = basic_salary + Home_Allowance + Food_Allowance;
            break;
        case 'M': case 'm':
            total_salary = basic_salary + Home_Allowance + Food_Allowance + Travel_Allowance;
            break;
        default:
            std::cout << "Invalid Input" << std::endl;
            return 1;
    }

    // Calculate tax based on total salary
    if (total_salary > 40000) {
        tax = total_salary * 0.1f;
    } else {
        tax = total_salary * 0.05f;
    }

    std::cout << "Total Salary: " << total_salary << std::endl;
    std::cout << "Your tax is: " << tax << std::endl;

    return 0;
}
