/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on: 7th February, 2024
 * Purpose:  Linear Search
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillAry(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100 + 1; // Fill array with random values between 1 and 100
    }
}

bool linSrch(int array[], int size, int val, int& indx) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == val) {
            indx = i;
            return true;
        }
    }
    return false;
}

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    
    const int SIZE = 100;
    int array[SIZE];
    int indx, val;
    
    fillAry(array, SIZE);
    array[13] = 50;
    val = 50;
    
    // do linear search and output the result
    if (linSrch(array, SIZE, val, indx))
        cout << val << " was found at indx = " << indx << endl;
    else
        cout << val << " was not found." << endl;
    
    return 0;
}