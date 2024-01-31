/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 6, 2024, 5:32 PM
 * Purpose: Circuit Board Pricing  
 */

//System Libraries 
#include <iostream>  //Input-Output Library
using namespace std;

//User Libraries

//Global Constants- Math,Physics,Chemistry,Conversions
const float proft_prcnt = 0.35; // 35% Proft


//Function Prototypes

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //Set a random seed 
    
    //Declare all variables
    float cost, price;
    
    //Initialize all variables
    cost = 14.95;
    
    //Process or Map solutions 
    price = cost + cost * proft_prcnt;
    
    //Display the output 
    cout << "cost: $14.95" << endl; 
    cout << "price (35% prft): $" << price << endl; 
    
    //Exit the Program 
    return 0;
}