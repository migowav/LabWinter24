/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 21, 2024
 * Purpose: MPG Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Global constant for liters per gallon
const double LITERS_PER_GALLON = 0.264179;

// Function to calculate miles per gallon
double calculateMPG(double liters, double miles) {
    return miles / (liters * LITERS_PER_GALLON);
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char option, nOpshun; // Option to choose from menu, Number of options
    
    //The Process -> Map Inputs to Outputs
    nOpshun = '3'; // 3 options available 
    do {
        // Display user choice
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Question 1" << endl;
        cout << "2 -> Question 2" << endl;
        cout << "3 -> Calculate Miles Per Gallon" << endl;
        cout << "etc....." << endl;
        cin >> option;
        switch (option) {
            case '1': cout << endl << "Question 1 Here" << endl << endl; break;
            case '2': cout << endl << "Question 2 Here" << endl << endl; break;
            case '3': 
                // Call the function for option 3
                {
                    char repeat;
                    do {
                        // Variables
                        double liters, miles;

                        // Input
                        cout << "Enter number of liters of gasoline:" << endl;
                        cout << endl;
                        cin >> liters;

                        cout << "Enter number of miles traveled:" << endl;
                        cout << endl;
                        cin >> miles;

                        // Calculate and output miles per gallon
                        cout << fixed << setprecision(2);
                        cout << "miles per gallon:" << endl;
                        cout << calculateMPG(liters, miles) << endl;

                        // Ask if the user wants to repeat the calculation
                        cout << "Again:" << endl;
                        cin >> repeat;

                        if (repeat == 'y' || repeat == 'Y') {
                            cout << endl;
                        }
                    } while (repeat == 'y' || repeat == 'Y');
                }
                break;
            default: cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOpshun);
    
    //Exit the Program
    return 0;
}
