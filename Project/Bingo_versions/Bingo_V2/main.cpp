/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 28th, 2024
 * Purpose: Bingo Project   
 */ 

#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to generate a random number between min and max (inclusive)
int genRanNum(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(0)); // Seed for random number generation
    const int grdSize = 5; // Size of the bingo grid
    const int numsPerRow = 5; // Number of numbers per row/column in the grid
    
// Initialize the bingo grid
    int bingGrid[grdSize][grdSize];
    for (int i = 0; i < grdSize; ++i) {
        for (int j = 0; j < grdSize; ++j) {
            
        }   
    // Simulate drawing numbers until a win condition is met
    
    //Win Conditions 

    
}