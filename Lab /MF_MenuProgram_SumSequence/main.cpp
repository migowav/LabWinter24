/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 21, 2024
 * Purpose:  Sum Menu
 */

//System Libraries
#include <iostream>  // Input/Output Library
using namespace std;

// Function to calculate the sum
int calculateSum(int num) {
    int sum = 0;
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }
    return sum;
}

// Execution Begins Here!
int main(int argc, char** argv) {
    // Declare Variables
    unsigned char option, nOpshun;

    // The Process -> Map Inputs to Outputs
    nOpshun = '3'; // 3 options available 
    do {
        // Display user choice
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Calculate Sum" << endl;
        cout << "2 -> Display Pattern" << endl;
        cout << "3 -> Exit Program" << endl;
        cin >> option; // Read in the option
        // Use a switch case to implement
        switch (option) {
            case '1':
                int num;
                cout << "Enter a positive integer: ";
                cin >> num;
                cout << "Sum = " << calculateSum(num) << endl;
                break;
            case '2':
        for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "+";
        }
        cout << endl;
    }
    break;
            case '3':
                cout << endl << "Exiting Program" << endl << endl;
                break;
            default:
                cout << endl << "Invalid option. Please try again." << endl << endl;
        }
    } while (option <= nOpshun);

    // Exit the Program
    return 0;
}