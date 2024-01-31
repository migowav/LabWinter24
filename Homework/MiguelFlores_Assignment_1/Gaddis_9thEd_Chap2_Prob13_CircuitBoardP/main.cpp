/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 5th, 2024, 4:55 PM
 * Purpose: Paint Problem # of cans of paint  
 */

//System Libraries 
#include <iostream>  //Input-Output Library
using namespace std;

//User Libraries

//Global Constants- Math,Physics,Chemistry,Conversions

//Function Prototypes

//Program Execution Begins Here 
int main(int argc, char** argv) {
    //Declare all variables
    unsigned short pntCov,fncHt,fncLnth,nCans;
    
    //Initialize all variables 
    pntCov=340;  //340 square feet^2/gallon
    fncHt=6;    //6 feet
    fncLnth=100;//100feet
    
    //Process or Map solutions
    nCans=4*fncHt*fncLnth/pntCov+1;//+1 for ceiling function round up
    
    //Display the output 
    cout<<"Paint Coverage = "<<pntCov<<" square feet/gallon"<<endl;
    cout<<"Fence Height   =  "<<fncHt<<" feet "<<endl;
    cout<<"Fence Length   = "<<fncLnth<<" feet "<<endl; 
    cout<<"Number of Cans of Paint required = "<<nCans<<" cans "<<endl;
    
    //Exit the Program 
    return 0;
}