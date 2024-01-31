/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 11th, 2024
 * Purpose:  Calorie Calculation
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
    const int COOKIES_PER_BAG = 40, SERVINGS_PER_BAG = 10, CALORIES_PER_SERVING = 300;

    //Initialize or input i.e. set variable values
    cout << "Calorie Counter" << endl;
    cout << "How many cookies did you eat?" << endl;

    int cookiesEaten;
    cin >> cookiesEaten;

    //Map inputs -> outputs
    double totalCalories = (static_cast<double>(cookiesEaten) / COOKIES_PER_BAG) * (SERVINGS_PER_BAG * CALORIES_PER_SERVING);

    //Display the outputs
    cout << "You consumed " << totalCalories << " calories.";

    //Exit stage right or left!
    return 0;
}