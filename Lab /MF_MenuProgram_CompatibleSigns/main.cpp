/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 17, 2024
 * Purpose:  Compatible Signs
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

// Function prototype for the Horoscope Program
void horoscopeCompatibility();

int main(int argc, char** argv) {
    unsigned char option, nOptions;

    nOptions = '1'; // In this case, we have 1 option
    do {
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Horoscope Compatibility Program" << endl;
        cout << "etc....." << endl;
        cin >> option;

        switch (option) {
            case '1':
                horoscopeCompatibility(); // Call function for Horoscope Compatibility Program
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOptions);

    return 0;
}

// Function to perform Horoscope Compatibility Program
void horoscopeCompatibility() {
    // Code for Horoscope Program
    string sign1, sign2;

    cout << "Horoscope Compatibility Program" << endl;
    cout << "Input 2 signs." << endl;
    cin >> sign1 >> sign2;

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

    cout << endl;
}
