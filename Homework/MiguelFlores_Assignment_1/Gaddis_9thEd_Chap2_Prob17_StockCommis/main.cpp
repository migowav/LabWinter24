/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 9, 2024, 9:03 PM
 * Purpose: Calculate Stock Commission  
 */

//System Libraries 
#include <iostream>  //Input-Output Library
using namespace std;

//User Libraries

//Global Constants- Math,Physics,Chemistry,Conversions

//Function Prototypes
const float COMM_RATE = 0.02;

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //Set a random seed 
    
    //Declare all variables 
   
    
    //Initialize all variables 
    float shrs = 750, prcPerShr = 35;
    float stockCst = shrs * prcPerShr;
    float comm = stockCst * COMM_RATE;
    float totCst = stockCst + comm;
    
    //Process or Map solutions 
    
    //Display the output 
    cout << "Stock Cost: $" << stockCst << endl; 
    cout << "Commission: $" << comm << endl; 
    cout << "Total Cost: $" << totCst << endl; 
    
    //Exit the Program 
    return 0;
}