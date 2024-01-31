/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 21, 2024
 * Purpose: 2or3 Max Menu
 */

// System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function to find the maximum of the first two parameters
float maxOfTwo(float num1, float num2) {
    return (num1 > num2) ? num1 : num2;
}

// Function to find the maximum of three parameters
float maxOfThree(float num1, float num2, float num3) {
    return maxOfTwo(maxOfTwo(num1, num2), num3);
}

// Execution Begins Here!
int main(int argc, char** argv) {
    // Declare Variables
    unsigned char option, nOpshun; // Option to choose from menu, Number of options
    
    // The Process -> Map Inputs to Outputs
    nOpshun = '3'; // 3 options available 
    do {
        // Display user choice
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Question 1" << endl;
        cout << "2 -> Question 2" << endl;
        cout << "3 -> Find the Maximum of Parameters" << endl;
        cout << "etc....." << endl;
        cin >> option; // Read in the option
        // Use a switch case to implement
        switch (option) {
            case '1': cout << endl << "Question 1 Here" << endl << endl; break;
            case '2': cout << endl << "Question 2 Here" << endl << endl; break;
            case '3': 
                // Call the function for option 3
                {
                    // Variables
                    float num1, num2, num3;

                    // Input
                    cout << "Enter first number:" << endl;
                    cin >> num1;

                    cout << "Enter Second number:" << endl;
                    cin >> num2;

                    cout << "Enter third number:" << endl;
                    cin >> num3;

                    // Output the largest number from two-parameter function
                    cout << fixed << setprecision(1);
                    cout << "Largest number from two parameter function:" << endl;
                    cout << maxOfTwo(num1, num2) << endl;
                    cout << endl; 

                    // Output the largest number from three-parameter function
                    cout << "Largest number from three parameter function:" << endl;
                    cout << maxOfThree(num1, num2, num3) << endl;
                }
                break;
            default: cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOpshun);
    
    // Exit the Program
    return 0;
}