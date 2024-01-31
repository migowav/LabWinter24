/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 30, 2024
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>
using namespace std;

// Function Prototypes
int fctrl(int); // Function to calculate factorial

// Execution Begins Here
int main(int argc, char** argv) {
    // Declare Variables
    unsigned char option, nOpshun; // Option to choose from menu, Number of options
    int num; // Number for factorial calculation
    
    // Output description
    cout << "This program calculates the factorial using a function prototype found in the template for this problem." << endl;
    
    // The Process -> Map Inputs to Outputs
    nOpshun = '3'; // In this case we have 3 options
    do {
        // Display user choice
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Question 1" << endl;
        cout << "2 -> Question 2" << endl;
        cout << "3 -> Calculate Factorial" << endl; // Option to calculate factorial
        cin >> option; // Read in the option
        
        // Use a switch case to implement
        switch (option) {
            case '1': cout << endl << "Question 1 Here" << endl << endl; break;
            case '2': cout << endl << "Question 2 Here" << endl << endl; break;
            case '3': // Calculate factorial
                cout << "Input the number for the factorial calculation:" << endl;
                cin >> num;
                cout << num << "! = " << fctrl(num) << endl;
                break;
            default: cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOpshun);
    
    // Exit the Program
    return 0;
}

// Function Definitions
int fctrl(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    
    // Recursive case: factorial of n is n * factorial(n - 1)
    return n * fctrl(n - 1);
}