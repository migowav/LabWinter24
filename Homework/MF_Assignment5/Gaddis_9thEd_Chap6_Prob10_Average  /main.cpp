/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on 30th January, 2024 
 * Purpose: Average
 */

//System Libraries 
#include <iostream>  
#include <iomanip>
using namespace std;

// Function Prototypes
void getScre(int &, int &, int &, int &, int &); // get test scores from user
float calcAvg(int, int, int, int, int); // calculate average of four highest scores
int fndLwst(int, int, int, int, int); // find lowest score among five

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //Declare all variables 
    int score1, score2, score3, score4, score5;

    //Process or Map solutions 
    getScre(score1, score2, score3, score4, score5); // Call function to get scores from user
    float average = calcAvg(score1, score2, score3, score4, score5); // Call function to calculate average
    
    //Display the output 
    cout << "Find the Average of Test Scores" << endl;
    cout << "by removing the lowest value." << endl;
    cout << "Input the 5 test scores." << endl; 
    cout << "The average test score = " << fixed << setprecision (1) << average; 
    
    //Exit the Program 
    return 0;
}

// Function: test scores from user
void getScre(int &score1, int &score2, int &score3, int &score4, int &score5) {
    cout;
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
}

// Function: calculate average of four highest scores
float calcAvg(int score1, int score2, int score3, int score4, int score5) {
    int lowest = fndLwst(score1, score2, score3, score4, score5);
    float sum = score1 + score2 + score3 + score4 + score5 - lowest; 
    return sum / 4.0f; // Return average of four highest scores
}

// Function to find lowest score among five
int fndLwst(int score1, int score2, int score3, int score4, int score5) {
    int lowest = score1; // Assume first score is the lowest
    if (score2 < lowest) lowest = score2; 
    if (score3 < lowest) lowest = score3; 
    if (score4 < lowest) lowest = score4; 
    if (score5 < lowest) lowest = score5; 
    return lowest; 
}