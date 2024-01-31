/* 
 * File: main.cpp 
 * Author: Miguel Flores
 * Created on 30th January, 2024
 * Purpose:  time clock 
 */

#include <iostream> 
#include <iomanip> 
using namespace std;

// Function Prototypes
void inputTime(int&, int&, char&);
void addTime(int&, int&, char&, int);
void outputTime(int, int, char);

// Program Execution Begins Here
int main(int argc, char** argv) {
    
    // Declare all variables
    int hour, minute, waiting;
    char ampm, repeat;

    // Process or Map solutions
    cout;
    do {
        cout << "Enter hour:" << endl;
        cin >> hour;
        cout << endl;

        cout << "Enter minutes:" << endl;
        cin >> minute;
        cout << endl;

        cout << "Enter A for AM, P for PM:" << endl;
        cin >> ampm;
        cout << endl;

        cout << "Enter waiting time:" << endl;
        cin >> waiting;
        cout << endl;

        cout << "Current time = ";
        outputTime(hour, minute, ampm);

        addTime(hour, minute, ampm, waiting);

        cout << "Time after waiting period = ";
        outputTime(hour, minute, ampm);

        cout << endl << "Again:";
        cin >> repeat;
        cout << endl;

        if (repeat == 'Y' || repeat == 'y') {
            cout << endl;
        }
    } while (repeat == 'Y' || repeat == 'y');

    // Exit the Program
    return 0;
}

// Function Definitions
void addTime(int& hour, int& minute, char& ampm, int waiting) {
    // Add waiting time
    minute += waiting;
    if (minute >= 60) {
        hour += minute / 60;
        minute %= 60;
    }
    if (hour >= 12) {
        ampm = (ampm == 'A') ? 'P' : 'A';
        if (hour > 12) hour -= 12;
    }
}

void outputTime(int hour, int minute, char ampm) {
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << ampm << "M" << endl;
}