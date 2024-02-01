/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 21, 2024
 * Purpose:  Fuel Eff Menu
 */

// System Libraries
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
        cout << "3 -> Compare Fuel Efficiency of Two Cars" << endl;
        cout << "etc....." << endl;
        cin >> option; // Read in the option
        // Use a switch case to implement
        switch (option) {
            case '1': cout << endl << "Question 1 Here" << endl << endl; break;
            case '2': cout << endl << "Question 2 Here" << endl << endl; break;
            case '3': 
                // Call the function for option 3
                {
                    char repeat;
                    do {
                        // Car 1
                        cout << "Car 1" << endl;
                        cout << "Enter number of liters of gasoline:" << endl;
                        double liters1, miles1;
                        cin >> liters1;

                        cout << "Enter number of miles traveled:" << endl;
                        cin >> miles1;

                        // Calculate and output miles per gallon for Car 1 
                        cout << "miles per gallon: " << fixed << setprecision(2) << calculateMPG(liters1, miles1) << endl;
                        cout << endl;

                        // Car 2
                        cout << "Car 2" << endl;
                        cout << "Enter number of liters of gasoline:" << endl;
                        double liters2, miles2;
                        cin >> liters2;

                        cout << "Enter number of miles traveled:" << endl;
                        cin >> miles2;

                        // Calculate and output miles per gallon for Car 2 
                        cout << "miles per gallon: " << fixed << setprecision(2) << calculateMPG(liters2, miles2) << endl;
                        cout << endl;

                        // Determine and announce which car is more fuel efficient
                        if (calculateMPG(liters1, miles1) > calculateMPG(liters2, miles2)) {
                            cout << "Car 1 is more fuel efficient" << endl;
                        } else if (calculateMPG(liters1, miles1) < calculateMPG(liters2, miles2)) {
                            cout << "Car 2 is more fuel efficient" << endl;
                        } else {
                            cout << "Both cars have the same fuel efficiency" << endl;
                        }

                        cout << endl;

                        // Ask if the user wants to repeat the calculation
                        cout << "Again:";
                        cin >> repeat;
                        cout << endl;

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