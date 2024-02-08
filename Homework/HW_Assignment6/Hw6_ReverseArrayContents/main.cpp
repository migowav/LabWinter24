/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created: 7th February, 2024
 * Purpose:  Reverse the Array
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

// Function Prototypes
void print(int[], int, int);    // Print the array

// Print the array
void print(int arr[], int size, int perLine) {
    cout;
    for (int i = 0; i < size; ++i) {
        cout << setw(2) << arr[i] << " ";
        if ((i + 1) % perLine == 0) cout << endl;
    }
}

int main() {
    // Original array
    int original[] = {
        43, 73, 97, 53, 24, 15, 25, 32, 75, 44,
        64, 71, 94, 35, 81, 16, 51, 81, 59, 25,
        99, 62, 38, 62, 62, 65, 39, 71, 89, 20,
        87, 51, 43, 53, 26, 48, 21, 59, 49, 60,
        22, 34, 52, 27, 53, 47, 66, 76, 58, 50
    };

    // Reverse array
    int reverse[] = {
        28, 45, 92, 16, 31, 14, 43, 47, 36, 30,
        92, 26, 62, 50, 64, 24, 80, 57, 59, 56,
        51, 92, 96, 47, 54, 70, 58, 25, 33, 37,
        81, 31, 23, 94, 27, 12, 46, 81, 91, 70,
        63, 67, 10, 84, 95, 27, 29, 26, 16, 77
    };

    // Print original array
    cout;
    print(original, sizeof(original) / sizeof(original[0]), 10);
    cout;

    return 0;
}