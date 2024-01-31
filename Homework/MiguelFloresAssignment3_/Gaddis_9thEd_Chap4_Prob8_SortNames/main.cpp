/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 15, 2024
 * Purpose:  Name Sorter
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
    
    // Declare variables
    string name1, name2, name3;

    // Input names
    cout << "Sorting Names" << endl;
    getline(cin, name1);
    getline(cin, name2);
    getline(cin, name3);

    // Sort names
    if (name1 > name2) swap(name1, name2);
    if (name1 > name3) swap(name1, name3);
    if (name2 > name3) swap(name2, name3);

    // Display sorted names
    cout << "Input 3 names" << endl;
    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3;

    return 0;
}