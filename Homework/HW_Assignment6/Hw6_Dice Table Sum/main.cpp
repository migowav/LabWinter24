/* 
 * File:   main.cpp
 * Author: Miguel flores
 * Created: 7th February, 2024
 * Purpose: Dice table 
 * 
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

int main() {
    const int ROWS = 6;
    int diceTable[ROWS][COLS];

    fillTable(diceTable, ROWS);
    printTable(diceTable, ROWS);

    return 0;
}