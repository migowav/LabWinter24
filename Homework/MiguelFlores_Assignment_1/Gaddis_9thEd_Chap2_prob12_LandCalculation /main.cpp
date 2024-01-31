/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 5, 2024, 4:50 PM
 * Purpose: Calculate Acres of Land  
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
    float sqFt, acres;
    
    //Initialize all variables
    sqFt=391876;// Given Land area in square feet
    
    //Process or Map solutions 
    acres= sqFt/43560; // 1 acre=43560 square feet 
    
    //Display the output 
    cout << "Land area in acres: " << acres << "acres" << endl;
    
    //Exit the Program 
    return 0;
}