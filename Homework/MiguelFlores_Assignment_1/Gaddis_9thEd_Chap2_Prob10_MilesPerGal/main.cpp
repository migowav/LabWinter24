/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 9, 2024, 7:40 PM
 * Purpose: Calculate car's miles per gallon 
 */

//System Libraries 
#include <iostream>  //Input-Output Library
using namespace std;

//User Libraries

//Global Constants- Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //Set a random seed 
    
    //Declare all variables 
    float galsofgas = 15; // initial amount of gallons 
    float milsdrvn= 375; // Number of gas mileage car can travel
    float mpg; // miles per gallon 
    
    //Initialize all variables 
    
    //Process or Map solutions 
    mpg = milsdrvn / galsofgas;
    
    //Display the output 
    cout << "the car's miles per gallon (mpg) is: " << mpg << "mpg" << endl;
    
    //Exit the Program 
    return 0;
}