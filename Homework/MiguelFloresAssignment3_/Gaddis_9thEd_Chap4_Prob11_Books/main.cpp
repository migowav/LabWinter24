/* 
 * File:  main.cpp
 * Author: Miguel Flores
 * Created on January 15, 2024
 * Purpose:  Books
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int numBooks;
    int points = 0;

    //Initialize or input i.e. set variable values
    cout << "Book Worm Points"<<endl;
    cin >> numBooks;

    //Map inputs -> outputs
    if (numBooks == 0) {
        points = 0;
    } else if (numBooks == 1) {
        points = 5;
    } else if (numBooks == 2) {
        points = 15;
    } else if (numBooks == 3) {
        points = 30;
    } else if (numBooks >= 4) {
        points = 60;
    }

    //Display the outputs
    cout << "Input the number of books purchased this month." <<endl;
    cout << "Books purchased =  " << numBooks << endl;
    cout << "Points earned   = " << points;
    

    //Exit stage right or left!
    return 0;
}