/* 
 * File:   main.cpp
 * Author: Miguel Flores 
 * Created on January 11th, 2024
 * Purpose:  Company pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   // For setprecision and fixed
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main() {
    float prevSal, retroPay, newSal, newMonthlySal;
    
    cout << "Input previous annual salary.\nRetroactive pay     = $";
    cin >> prevSal;

    retroPay = 0.076f * (prevSal / 2);
    newSal = prevSal + retroPay;
    newMonthlySal = newSal / 12;

    cout << fixed << setprecision(2);
    cout << "Retroactive pay     = $" << retroPay << endl;
    cout << "New annual salary   = $" << newSal << endl;
    cout << "New monthly salary  = $" << newMonthlySal << endl;

    return 0;
}