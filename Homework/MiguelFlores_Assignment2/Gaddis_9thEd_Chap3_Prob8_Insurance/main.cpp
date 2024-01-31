/* 
 * File:   main.cpp
 * Author: Miguel Flores 
 * Created on Jan 11th, 2024
 * Purpose:  Insurance calculator with specified output
 */

//System Libraries
#include <iostream>  // Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    double replacementCost, minInsurance;

    //Initialize or input i.e. set variable values
    cout << "Insurance Calculator\nHow much is your house worth?\n";
    cin >> replacementCost;

    //Map inputs -> outputs
    minInsurance = 0.8 * replacementCost;

    //Display the outputs
    cout << "You need $" << minInsurance << " of insurance.";

    //Exit stage right or left!
    return 0;
}