/* 
 * Author: Miguel Flores
 * Created on 30th January, 2024
 * Purpose: Factorial Function  
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes
int fctrl(int);//Function to evaluate

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    int num;
    
    //Output description
    cout << "This program calculates the factorial using a function prototype found in the template for this problem." << endl;
    
    //Input the number for the function
    cout << "Input the number for the function." << endl;
    cin >> num;
    
    //Output data
    cout << num << "! = " << fctrl(num);
    
    //Exit stage right!
    return 0;
}

int fctrl(int n) {
    //base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    
    // recursive case: factorial of n is n * factorial(n - 1)
    return n * fctrl(n - 1);
}