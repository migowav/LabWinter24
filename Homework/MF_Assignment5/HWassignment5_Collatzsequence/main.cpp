/* 
 * Author: Miguel Flores
 * Created on 30th January, 2024
 * Purpose: Collatz sequence
 */

//System Libraries
#include <iostream> 
using namespace std;

//Function Prototypes
int collatz(int);// calculate the steps for the Collatz sequence

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    int n;
    
    //Initialize Variables
    cout << "Collatz Conjecture Test" << endl;
    cout << "Input a sequence start" << endl;
    cin >> n;
    
    //Process/Map inputs to outputs
    cout << "Sequence start of " << n << " cycles to 1 in " <<
            collatz(n) << " steps";
    
    //Exit stage right!
    return 0;
}

//Function Definition: Collatz sequence
int collatz(int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) // If n is even
            n /= 2;
        else // If n is odd
            n = 3 * n + 1;
        steps++;
    }
    return steps + 1;  // Add 1 when n reaches 1
}