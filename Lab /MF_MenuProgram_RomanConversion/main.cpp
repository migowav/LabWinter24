/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 17, 2024
 * Purpose:  Roman Conversion
 */

//System Libraries
#include <iostream>
using namespace std;

// Function prototype for the Arabic to Roman Numeral Conversion
void arabicToRomanMenu();

int main(int argc, char** argv) {
    unsigned char option, nOptions;

    nOptions = '1'; // In this case, we have 1 option
    do {
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Arabic to Roman Numeral Conversion" << endl;
        cout << "etc....." << endl;
        cin >> option;

        switch (option) {
            case '1':
                arabicToRomanMenu(); // Call function for Arabic to Roman Numeral Conversion
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOptions);

    return 0;
}

// Function to perform Arabic to Roman Numeral Conversion
void arabicToRoman(int num) {
    // Array to store Roman numeral symbols
    string roman[] = {"", "M", "D", "C", "L", "X", "V", "I"};

    // Array to store Roman numeral values
    int value[] = {0, 1000, 500, 100, 50, 10, 5, 1};

    // Output the original Arabic numeral
    cout << num << " is equal to ";

    // Loop through each Roman numeral symbol
    for (int i = 1; i <= 7; i++) {
        // Repeat the Roman numeral symbol as needed
        while (num >= value[i]) {
            cout << roman[i];
            num -= value[i];
        }

        // Check for subtraction cases (e.g., IV, XL, CM)
        int next = i + (i % 2 == 0 ? 1 : 2);
        if (next <= 7 && num >= (value[i] - value[next])) {
            cout << roman[next] << roman[i];
            num -= (value[i] - value[next]);
        }
    }
}

// Function to handle input and output for Arabic to Roman Numeral Conversion
void arabicToRomanMenu() {
    int x;

    cout << "Arabic to Roman Numeral Conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin >> x;

    if (x < 1000 || x > 3000) {
        cout << x << " is Out of Range!" << endl;
        return;
    }

    arabicToRoman(x);
    cout << endl;
}
