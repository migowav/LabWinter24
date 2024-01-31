/* 
 * File:   main.cpp
 * Author: Miguel Flores 
 * Created on January 11th, 2024
 * Purpose:  Room Occupancy
 */

//System Libraries
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int maxCapacity, numPeople;

    // Prompt user for input
    cout << "Input the maximum room capacity and the number of people"<< endl;
    cin >> maxCapacity >> numPeople;

    // Check if the meeting is legal
    if (numPeople <= maxCapacity) {
        // Display message if legal
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by " << maxCapacity - numPeople << " will be allowed without violation.";
    } else {
        // Display message if not legal
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by " << numPeople - maxCapacity << " to avoid fire violation.";
    }

    // Exit the program
    return 0;
}