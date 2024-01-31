/* 
 * Author: Miguel Flores 
 * Created on 30th Janurary, 2024
 * Purpose: Output Collatz sequence   
 */

//System Libraries
#include <iostream>
#include <vector>
using namespace std;
 
//Function Prototypes
int collatz(int);// calculate Collatz sequence and return steps
void printSequence(int);//print Collatz sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n, ns;
    
    //Initialize Variables
    cout << "Collatz Conjecture Test" << endl;
    cout << "Input a sequence start" << endl;
    cin >> n;
    
    //Process/Map inputs to outputs
    ns = collatz(n);
    
    //Output data
    cout << "Sequence start of " << n << " cycles to 1 in " <<
            ns << " steps";
    
    //Exit stage right!
    return 0;
}

//Function: calculate Collatz sequence and return steps
int collatz(int n) {
    int steps = 0;
    while (n != 1) {
        cout << n;
        if (n != 1) cout << ", ";
        if (n % 2 == 0) // If n is even
            n /= 2;
        else // If n is odd
            n = 3 * n + 1;
        steps++;
    }
    cout << "1" << endl; // Print the final value of 1
    return steps + 1; // Add 1 to include the step when n reaches 1
}