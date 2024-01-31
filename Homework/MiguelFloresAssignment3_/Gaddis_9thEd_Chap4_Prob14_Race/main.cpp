/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 15th, 2024
 * Purpose:  Placing the Runners
 */

 //System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const int NUM_RUNNERS = 3;
    string names[NUM_RUNNERS];
    float times[NUM_RUNNERS];
    
    //Initialize or input i.e. set variable values
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;

// Display the input prompt message once
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
    
    //Map inputs -> outputs
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
    cout << names[firstPlace] << "\t "  << times[firstPlace] << endl;
    cout << names[secondPlace] << "\t" << times[secondPlace] << endl;
    cout << names[thirdPlace] << "\t" << times[thirdPlace];


    //Exit stage right or left!
    return 0;
}