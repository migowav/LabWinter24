/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 11th, 2024
 * Purpose:  Calculate Temperature
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
    float fahrenheit, celsius;

    //Initialize or input i.e. set variable values
    cout << "Temperature Converter" << endl;
    cout << "Input Degrees Fahrenheit"<< endl;
    cin >> fahrenheit;

    //Map inputs -> outputs
    celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    //Display the outputs
    cout << fahrenheit << " Degrees Fahrenheit = " << celsius << " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}