/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 3, 2024, 6:57 PM
 * Purpose: Sale Tax 
 */

//System Libraries 
#include <iostream>  //Input-Output Library
using namespace std;

//User Libraries

//Global Constants- Math,Physics,Chemistry,Conversions
const float state_tax_rate= 0.04; //4% state sales tax
const float county_tax_rate= 0.02; // 2% county sales tax

//Function Prototypes

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //Set a random seed 
    
    //Declare all variables 
    float purchase= 95;
    float st_tax, cnty_tax, ttl_tax;
    
    //Initialize all variables 
    
    //Process or Map solutions 
    st_tax = purchase * state_tax_rate; 
    cnty_tax = purchase * county_tax_rate; 
    ttl_tax= st_tax + cnty_tax;
    
    //Display the output 
    cout << "Purchase: $" << purchase << endl; 
    cout << "State Tax (4%): " << st_tax << endl; 
    cout << "County Tax (2%): " <<cnty_tax << endl;
    cout << "Total Tax: $" << ttl_tax << endl;
    
    //Exit the Program 
    return 0;
}