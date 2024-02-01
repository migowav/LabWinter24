/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 21, 2024
 * Purpose: EstCost Menu
 */

// System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate rate of inflation
float calculateInflation(float currentPrice, float yearAgoPrice) {
    return ((currentPrice - yearAgoPrice) / yearAgoPrice) * 100.0;
}

// Function to calculate estimated price in one year
float calculatePriceInOneYear(float currentPrice, float inflationRate) {
    return currentPrice + (currentPrice * inflationRate / 100.0);
}

// Function to calculate estimated price in two years
float calculatePriceInTwoYears(float currentPrice, float inflationRate) {
    float priceInOneYear = calculatePriceInOneYear(currentPrice, inflationRate);
    return priceInOneYear + (priceInOneYear * inflationRate / 100.0);
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
        cout << "3 -> Calculate Rate of Inflation and Estimated Prices" << endl;
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
                        // Variables
                        float currentPrice, yearAgoPrice, inflationRate;

                        // Input
                        cout << "Enter current price:" << endl;
                        cin >> currentPrice;

                        cout << "Enter year-ago price:" << endl;
                        cin >> yearAgoPrice;

                        // Calculate inflation rate
                        inflationRate = calculateInflation(currentPrice, yearAgoPrice);

                        // Output inflation rate
                        cout << fixed << setprecision(2);
                        cout << "Inflation rate: " << inflationRate << "%" << endl;
                        cout << endl; 

                        // Calculate and output estimated price in one year and two years
                        cout << "Price in one year: $" << calculatePriceInOneYear(currentPrice, inflationRate) << endl;
                        cout << "Price in two year: $" << calculatePriceInTwoYears(currentPrice, inflationRate) << endl;
                        cout << endl; 

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
    
    // Exit the Program
    return 0;
}
