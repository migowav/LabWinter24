/* 
 * File:   main.cpp
 * Author: Miguel Flores 
 * Created on January 15th, 2024
 * Purpose:  Internet Service bill
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
double calculateBill(char package, int hours);

// Main Function
int main() {
    // Declare Variables
    char package;
    int hours;

    // Input: Set variable values
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;

    // Input validation
    cout;
    cin >> package;

    while (package != 'A' && package != 'B' && package != 'C') {
        cout << "Invalid package. Please enter A, B, or C: ";
        cin >> package;
    }

    cout;
    cin >> hours;
    
    // Input validation
    while (hours < 0 || hours > 744) {
        cout << "Invalid number of hours. Please enter a value between 0 and 744: ";
        cin >> hours;
    }

    // Process and Output
    double totalAmount = calculateBill(package, hours);
    cout << fixed << setprecision(2);  // Set decimal precision to 2
    cout << "Bill = $ " << totalAmount;

    return 0;
}

// Function to calculate the total amount due
double calculateBill(char package, int hours) {
    const double PACKAGE_A_COST = 9.95;
    const double ADDITIONAL_A_COST = 2.00;
    const double PACKAGE_B_COST = 14.95;
    const double ADDITIONAL_B_COST = 1.00;
    const double PACKAGE_C_COST = 19.95;

    double totalAmount;

    switch (package) {
        case 'A':
            totalAmount = PACKAGE_A_COST + max(0.0, static_cast<double>(hours - 10)) * ADDITIONAL_A_COST;
            break;
        case 'B':
            totalAmount = PACKAGE_B_COST + max(0.0, static_cast<double>(hours - 20)) * ADDITIONAL_B_COST;
            break;
        case 'C':
            totalAmount = PACKAGE_C_COST;
            break;
    }

    return totalAmount;
}