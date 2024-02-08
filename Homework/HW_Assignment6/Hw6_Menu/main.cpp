/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on February 7th, 2024
 * Purpose:  Menu dice table
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

const int COLS = 6;

void fillTable(int table[][COLS], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < COLS; ++j) {
            table[i][j] = i + j + 2;
        }
    }
}

void printTable(const int table[][COLS], int size) {
    cout << "Think of this as the Sum of Dice Table" << endl;
    cout << "           C o l u m n s" << endl;
    cout << "     |   1   2   3   4   5   6" << endl;
    cout << "----------------------------------" << endl;
    char rowHeadings[] = {' ','R','O','W','S',' '};
    for (int i = 0; i < size; ++i) {
    cout << "" << rowHeadings[i]; 
       cout << setw(3) << (i + 1) << " |";
        for (int j = 0; j < COLS; ++j) {
            cout << setw(4) << table[i][j];
        }
        cout << endl;
    }
}

int main(int argc, char** argv) {
    //Declare Variables
    unsigned char option, nOpshun;
    
    //The Process -> Map Inputs to Outputs
    nOpshun = '4'; // In this case, we have 4 options
    do {
        //Display user choice
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Question 1" << endl;
        cout << "2 -> Question 2" << endl;
        cout << "3 -> Question 3" << endl;
        cout << "4 -> Display Sum of Dice Table" << endl; // New option
        cin >> option; // Read in the option
        //Use a switch case to implement
        switch(option) {
            case '1':
                cout << endl << "Question 1 Here" << endl << endl;
                break;
            case '2':
                cout << endl << "Question 2 Here" << endl << endl;
                break;
            case '3':
                cout << endl << "Question 3 Here" << endl << endl;
                break;
            case '4': // New case for displaying the table
                cout << endl;
                const int ROWS = 6;
                int diceTable[ROWS][COLS];
                fillTable(diceTable, ROWS);
                printTable(diceTable, ROWS);
                cout << endl;
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOpshun);

    //Exit the Program
    return 0;
} 