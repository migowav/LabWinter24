/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 21, 2024
 * Purpose:  Penny Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate pay
void calculatePay() {
    // Variables
    int numDays;
    double totalPay = 0.0;
    const double PENNY = 0.01;

    // Input
    cout << "Enter the number of days: ";
    cin >> numDays;

    // Input validation
    while (numDays < 1) {
        cout << "Please enter a number of days greater than or equal to 1: ";
        cin >> numDays;
    }

    // Calculate earnings
    for (int day = 1; day <= numDays; ++day) {
        totalPay += PENNY * (1 << (day - 1));
    }

    // Display total earnings in dollars
    cout << fixed << setprecision(2);
    cout << "Total Pay = $" << totalPay << endl;
}

int main() {
    // Declare Variables
    unsigned char option;
    const unsigned char numOptions = '3';  // Adjust the number of options accordingly

    do {
        // Display user choice
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Question 1" << endl;
        cout << "2 -> Question 2" << endl;
        cout << "3 -> Calculate Pay" << endl;  // option for calculating pay
        cout << numOptions << " -> Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        // Use a switch case to implement menu options
        switch (option) {
            case '1':
                cout << endl << "Question 1 Here" << endl << endl;
                break;
            case '2':
                cout << endl << "Question 2 Here" << endl << endl;
                break;
            case '3':
                calculatePay();  
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= numOptions);

    // Exit the Program
    return 0;
}