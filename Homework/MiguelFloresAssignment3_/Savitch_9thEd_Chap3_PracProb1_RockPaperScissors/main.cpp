/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 15, 2024
 * Purpose:  RockPaperScissors
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
    //Declare Variables
    char p1,p2;
    string msg;
    
    //Initialize or input i.e. set variable values
    cin>>p1>>p2;
    msg="Nothing";
    
    //Map inputs -> outputs
    msg=p1==p2?"Nobody wins.":msg;
    p1-=p1>=97?32:0;
    p2-=p2>=97?32:0;
    if (p1=='R'){
        if(p2=='P')   msg="Paper covers rock.";
        if(p2=='S')   msg="Rock breaks scissors."; 
    }else if(p1=='P'){
        if(p2=='R')   msg="Paper covers rock.";
        if(p2=='S')   msg="Scissors cuts paper.";
    }else if(p1=='S'){
        if(p2=='R')   msg="Rock beats Scissors.";
        if(p2=='P')   msg="Scissors cuts paper.";
    }

    //Display the outputs
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cout<<msg;
    
    //Exit stage right or left!
    return 0;
}