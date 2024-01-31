/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 15, 2024
 * Purpose:  Sign Compability
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

int main() {

    // Declare Variables
    string sign1, sign2;

    // Initialize or input i.e. set variable values
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1 >> sign2;

    // Map inputs -> outputs
    if ((sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius") &&
        (sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius")) {
        cout << sign1 << " and " << sign2 << " are compatible Fire signs.";
    } else if ((sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn") &&
               (sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn")) {
        cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
    } else if ((sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius") &&
               (sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius")) {
        cout << sign1 << " and " << sign2 << " are compatible Air signs.";
    } else if ((sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces") &&
               (sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces")) {
        cout << sign1 << " and " << sign2 << " are compatible Water signs." << endl;
    } else {
        cout << sign1 << " and " << sign2 << " are not compatible signs.";
    }
    
    // Exit stage right or left!
    return 0;
}