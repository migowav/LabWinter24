/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 15, 2024
 * Purpose:  Bank charges
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declare Variables
    float balance;
    int numChecks;
    float serviceFee = 10.00; // Set the base monthly fee to $10.00

     // Initialize or input i.e. set variable values
    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cout;
    cin >> balance;

    cout;
    cin >> numChecks;

    // Map inputs -> outputs
    if (balance < 400)
        serviceFee += 15.0;

    float checkFee = numChecks * 0.04; // Assuming a constant fee per check
    float monthlyFee = serviceFee + checkFee;
    float lowBalanceFee = (balance < 400) ? 15.0 : 0.0;

    // Display the outputs with formatting
    cout << fixed << setprecision(2); // Set output to display 2 decimal places
    cout << "Balance     $   " << balance << endl;
    cout << "Check Fee   $     " << checkFee << endl;
    cout << "Monthly Fee $    " << monthlyFee << endl;
    cout << "Low Balance $    " << lowBalanceFee << endl;

    float newBalance = balance - (monthlyFee + lowBalanceFee);
    cout << "New Balance $    " << newBalance;

    // Exit stage right or left!
    return 0;
}