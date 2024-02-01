/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 21, 2024
 * Purpose: Min Max Menu
 */

//System Libraries
#include <iostream>
using namespace std;

// Function to find the smallest and largest numbers in a series
void findSmallestLargest() {
    int num, smallest, largest;

    // Prompt user to enter the first number
    cout << "Enter the first number (-99 to end): ";
    cin >> num;

    // Initialize smallest and largest with the first number
    smallest = largest = num;

    // Continue reading numbers until -99 is entered
    while (num != -99) {
        // Check if the current number is smaller than the smallest
        if (num < smallest) {
            smallest = num;
        }

        // Check if the current number is larger than the largest
        if (num > largest) {
            largest = num;
        }

        // Prompt user for the next number
        cout << "Enter the next number (-99 to end): ";
        cin >> num;
    }

    // Display the results
    cout << "Smallest number in the series is " << smallest << endl;
    cout << "Largest  number in the series is " << largest << endl;
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char option, nOpshun; 
    
    //The Process -> Map Inputs to Outputs
    nOpshun = '3';
    do {
        // Display user choice
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Question 1" << endl;
        cout << "2 -> Question 2" << endl;
        cout << "3 -> Find Smallest and Largest Numbers" << endl;
        cout << "etc....." << endl;
        cin >> option; 
        switch (option) {
            case '1': cout << endl << "Question 1 Here" << endl << endl; break;
            case '2': cout << endl << "Question 2 Here" << endl << endl; break;
            case '3': findSmallestLargest(); break; 
            default: cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOpshun);
    
    //Exit the Program
    return 0;
}