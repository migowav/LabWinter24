/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 11th, 2024
 * Purpose:  Trig functions
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //For trigonometric functions
#include <iomanip>   //For setprecision
using namespace std;

//Function Prototypes

//Execution Begins Here!
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    double angleDegrees, 
           angleRadians, 
           sineVal, 
           cosineVal, 
           tangentVal;

    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees: ";
    cin >> angleDegrees;

    //Convert angle to radians
    angleRadians = angleDegrees * (M_PI / 180.0);

    //Calculate trigonometric values
    sineVal = sin(angleRadians);
    cosineVal = cos(angleRadians);
    tangentVal = tan(angleRadians);

    //Display the outputs in the specified format
    cout << "sin(" << angleDegrees << ") = " << fixed << setprecision(4) << sineVal << endl;
    cout << "cos(" << angleDegrees << ") = " << cosineVal << endl;
    cout << "tan(" << angleDegrees << ") = " << fixed << setprecision(4) << tangentVal << endl;

    //Exit stage right or left!
    return 0;
}