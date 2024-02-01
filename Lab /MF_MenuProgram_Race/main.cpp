/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 17, 2024
 * Purpose: Placing the Runners 
 */

//System Libraries
#include <iostream>
using namespace std;

// Function prototype for the Race Ranking Program
void raceRanking();

int main(int argc, char** argv) {
    unsigned char option, nOptions;

    nOptions = '1'; // In this case, we have 1 option
    do {
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Race Ranking Program" << endl;
        cout << "etc....." << endl;
        cin >> option;

        switch (option) {
            case '1':
                raceRanking(); // Call function for Race Ranking Program
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOptions);

    return 0;
}

void raceRanking() {
    // Code for Race Ranking Program
    const int NUM_RUNNERS = 3;
    string names[NUM_RUNNERS];
    float times[NUM_RUNNERS];

    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cout << "Their names, then their times" << endl;

    for (int i = 0; i < NUM_RUNNERS; ++i) {
        cin >> names[i];

        // Input validation for positive numbers
        do {
            cin >> times[i];

            if (times[i] <= 0) {
                cout << "Please enter a positive time." << endl;
            }
        } while (times[i] <= 0);
    }

    // Find the positions based on time
    int firstPlace = 0, secondPlace = 1, thirdPlace = 2;

    if (times[secondPlace] < times[firstPlace]) {
        swap(firstPlace, secondPlace);
    }

    if (times[thirdPlace] < times[firstPlace]) {
        swap(firstPlace, thirdPlace);
    }

    if (times[thirdPlace] < times[secondPlace]) {
        swap(secondPlace, thirdPlace);
    }

    // Display the outputs
    cout << names[firstPlace] << "\t " << times[firstPlace] << endl;
    cout << names[secondPlace] << "\t" << times[secondPlace] << endl;
    cout << names[thirdPlace] << "\t" << times[thirdPlace] << endl;
}
