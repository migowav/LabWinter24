/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 21, 2024
 * Purpose:  Pattern Menu
 */

//System Libraries
#include <iostream>  // Input/Output Library
using namespace std;

// Function to display the pattern
void displayPattern() {
    cout << "+\n" << endl;
    cout << "++\n" << endl;
    cout << "+++\n" << endl;
    cout << "++++\n" << endl;
    cout << "+++++\n" << endl;
    cout << "++++++\n" << endl;
    cout << "+++++++\n" << endl;
    cout << "++++++++\n" << endl;
    cout << "+++++++++\n" << endl;
    cout << "++++++++++\n" << endl;
    cout << "++++++++++\n" << endl;
    cout << "+++++++++\n" << endl;
    cout << "++++++++\n" << endl;
    cout << "+++++++\n" << endl;
    cout << "++++++\n" << endl;
    cout << "+++++\n" << endl;
    cout << "++++\n" << endl;
    cout << "+++\n" << endl;
    cout << "++\n" << endl;
    cout << "+";
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
        cout << "3 -> Display Pattern" << endl;
        cout << "etc....." << endl;
        cin >> option; 
        // Use a switch case to implement
        switch (option) {
            case '1': cout << endl << "Question 1 Here" << endl << endl; break;
            case '2': cout << endl << "Question 2 Here" << endl << endl; break;
            case '3': displayPattern(); break; 
            default: cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOpshun);
    
    //Exit the Program
    return 0;
}