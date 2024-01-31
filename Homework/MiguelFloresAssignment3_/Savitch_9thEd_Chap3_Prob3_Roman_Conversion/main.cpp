/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 15th, 2024
 * Purpose:  Roman Conversion
 */

// System Libraries
#include <iostream>
using namespace std;

// Function Prototypes
void arabicToRoman(int);

// Execution Begins Here!
int main() {
    // Declare Variables
    int x;

    // Input the integer to convert
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert."<< endl;
    cin >> x;

    // Check if the input is within the valid range
    if (x < 1000 || x > 3000) {
        cout << x << " is Out of Range!";
        return 1; // Exit with an error code
    }

    // Output the Arabic to Roman numeral conversion
    arabicToRoman(x);

    // Exit stage right!
    return 0;
}

// Function to perform Arabic to Roman numeral conversion
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