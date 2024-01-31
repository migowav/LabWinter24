/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 21, 2024
 * Purpose:  Rectangle Menu
 */

//System Libraries
#include <iostream>
using namespace std;

// Function to draw a rectangle
void drawRectangle() {
    int sideLength;
    char character;

    // Ask user for a positive integer
    cout << "Enter the side length of the rectangle (1-15): ";
    cin >> sideLength;

    // Validate the input
    if (sideLength < 1 || sideLength > 15) {
        cout << "Invalid input. Please enter a positive integer no greater than 15." << endl;
        return;
    }

    // Ask user for the character to use
    cout << "Enter the character to use: ";
    cin >> character;

    // Display the rectangle
    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            cout << character;
        }

        if (i != sideLength - 1) {
            cout << endl;
        }
    }
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
        cout << "3 -> Draw Rectangle" << endl;
        cout << "etc....." << endl;
        cin >> option; 
        // Use a switch case to implement
        switch (option) {
            case '1': cout << endl << "Question 1 Here" << endl << endl; break;
            case '2': cout << endl << "Question 2 Here" << endl << endl; break;
            case '3': drawRectangle(); break;
            default: cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOpshun);
    
    //Exit the Program
    return 0;
}