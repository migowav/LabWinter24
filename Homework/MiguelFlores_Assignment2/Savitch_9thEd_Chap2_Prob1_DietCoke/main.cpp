/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 11th, 2024
 * Purpose:  Diet Coke Cosumption 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants
const float SWEETENER_PERCENT = 0.001f;  // 1/10th of 1% artificial sweetener in diet soda

//Function Prototypes

//Execution Begins Here!
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    const int MOUSE_MASS = 35;                // Mass of the mouse in grams
    const float LETHAL_DOSE_MOUSE = 5.0f;     // Lethal dose for a mouse in grams
    const float SODA_MASS = 350.0f;           // Mass of a soda can in grams
    const float WEIGHT_CONVERSION = 45359.2f;  // Conversion factor from pounds to grams

    float dieterWeight, lethalDoseHuman, sweetenerDose;

    //Initialize or input i.e. set variable values
    cout << "Program to calculate the limit of Soda Pop Consumption." << endl;
    cout << "Input the desired dieter's weight in lbs: ";
    cin >> dieterWeight;

    //Convert dieter's weight to grams and calculate lethal dose
    lethalDoseHuman = (LETHAL_DOSE_MOUSE * dieterWeight * WEIGHT_CONVERSION) / MOUSE_MASS;

    //Calculate the amount of artificial sweetener in a can of diet soda
    sweetenerDose = SODA_MASS * SWEETENER_PERCENT;

    //Display the output in the specified format
    cout << "Input the desired dieter's weight in lbs:" << endl;
    cout << "The maximum number of soda pop cans" << endl;
    cout << "which can be consumed is " << static_cast<int>(lethalDoseHuman / sweetenerDose) << " cans" << endl;

    //Exit stage right or left!
    return 0;