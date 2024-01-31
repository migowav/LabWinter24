/* 
 * Author: Miguel Flores
 * Created on January 30th, 2024
 * Purpose: isPrime? 
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes
bool isPrime(int);//Check if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    
    //Input a number to test if Prime
    cout << "Input a number to test if Prime." << endl;
    cin >> num;
    
    //Output data
    if (isPrime(num))
        cout << num << " is prime.";
    else
        cout << num << " is not prime.";
    
    //Exit stage right!
    return 0;
}

//function: Check if a number is prime
bool isPrime(int n) {
    if (n <= 1) // 0 and 1 are not prime numbers
        return false;
    
    // Check for factors from 2 to sqrt(n)
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false; // n has a divisor other than 1 and itself
    }
    
    return true; // n is only divisible by 1 and itself
}