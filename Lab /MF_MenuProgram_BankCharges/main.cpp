/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 17, 2024
 * Purpose:  Bank Charges 
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype for the Monthly Bank Fees
void monthlyBankFees();

int main(int argc, char** argv) {
    unsigned char option, nOptions;

    nOptions = '1'; // In this case, we have 1 option
    do {
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Monthly Bank Fees" << endl;
        cout << "etc....." << endl;
        cin >> option;

        switch (option) {
            case '1':
                monthlyBankFees(); // Call function for Monthly Bank Fees
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOptions);

    return 0;
}

void monthlyBankFees() {
    // Code for Monthly Bank Fees
    float balance;
    int numChecks;
    float serviceFee = 10.00;

    cout << "Monthly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> balance >> numChecks;

    if (balance < 400)
        serviceFee += 15.0;

    float checkFee = numChecks * 0.04;
    float monthlyFee = serviceFee + checkFee;
    float lowBalanceFee = (balance < 400) ? 15.0 : 0.0;

    cout << fixed << setprecision(2);
    cout << "Balance     $   " << balance << endl;
    cout << "Check Fee   $     " << checkFee << endl;
    cout << "Monthly Fee $    " << monthlyFee << endl;
    cout << "Low Balance $    " << lowBalanceFee << endl;

    float newBalance = balance - (monthlyFee + lowBalanceFee);
    cout << "New Balance $    " << newBalance << endl;
}
