/* 
 * File:   main.cpp
 * Author: Miguel Flores 
 * Created on 11 Janurary 2024
 * Purpose:  Test Scores 
 */

//System Libraries
#include <iostream>  // Input/Output Library
#include <iomanip>   // Input/Output Manipulation Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    double score1, score2, score3, score4, score5;

    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average."<< endl;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;

    //Map inputs -> outputs
    double average = (score1 + score2 + score3 + score4 + score5) / 5.0;

    //Display the outputs
    cout << fixed << showpoint << setprecision(1);
    cout << "The average = " << average;

     //Exit stage right or left!
    return 0;
}