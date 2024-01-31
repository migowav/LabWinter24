/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on 30th January, 2024
 * Purpose: Military time to standard 
 */

//system libraries
#include <iostream>
#include <limits>
using namespace std;

// Function Prototypes
void inputTime(int&, int&);
bool convertTo12Hour(int&, int&, char&);
void outputTime(int, int, char);

// Program Execution Begins Here
int main() {
    // Declare all variables
    int hour, minute;
    char ampm, repeat;
    
    // Process or Map solutions
    cout << "Military Time Converter to Standard Time" << endl;
    do {
        // Inputting Military Time
        cout << "Input Military Time hh:mm:";
        inputTime(hour, minute);
        
        // Converting to 12-hour format and output
        if (convertTo12Hour(hour, minute, ampm)) {
            outputTime(hour, minute, ampm);
        } else {
            cout << "Invalid time input!" << endl;
        }
        
        // Prompt for conversion
        cout << "Would you like to convert another time (y/n): ";
        cin >> repeat;
        cout << endl;
        
    } while (repeat == 'Y' || repeat == 'y');
    
    // Exit the Program
    return 0;
}

// Function Definitions
void inputTime(int& hour, int& minute) {
    char colon;
    cin >> hour >> colon >> minute;
}

bool convertTo12Hour(int& hour, int& minute, char& ampm) {
    if ((hour >= 0 && hour <= 23) && (minute >= 0 && minute <= 59)) {
        if (hour >= 12) {
            ampm = 'P';
            if (hour > 12) hour -= 12;
        } else {
            ampm = 'A';
            if (hour == 0) hour = 12; 
        }
        return true;
    } else {
        return false;
    }
}

void outputTime(int hour, int minute, char ampm) {
    cout << endl << hour << ":" << (minute < 10 ? "0" : "") << minute << " = " << hour << ":" << (minute < 10 ? "0" : "") << minute << " " << ampm << "M" << endl;
}