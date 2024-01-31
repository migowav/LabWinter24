/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on 30th January, 2024
 * Purpose: present Value 
 */
 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function Prototypes
float psntVal(float, float, int);

// Program Execution Begins Here
int main(int argc, char** argv) {
    
    // Declare variables
    float futureValue, annualInterestRate;
    int numberOfYears;

    // Prompt input
    cout << "This is a Present Value Computation" << endl;
    cout << "Input the Future Value in Dollars" << endl;
    cin >> futureValue;
    cout << "Input the Number of Years" << endl;
    cin >> numberOfYears;
    cout << "Input the Interest Rate %/yr" <<endl;
    cin >> annualInterestRate;

    // interest rate to decimal form
    annualInterestRate /= 100;

    // Calculating the present value
    float presentValue = psntVal(futureValue, annualInterestRate, numberOfYears);

    // Display result
    cout << fixed << setprecision(2); 
    cout << "The Present Value = $" << presentValue;

    return 0;
}

// Functions Defined 
float psntVal(float futureValue, float annualInterestRate, int numberOfYears) {
    float presentValue = futureValue / pow((1 + annualInterestRate), numberOfYears);
    return presentValue;
}