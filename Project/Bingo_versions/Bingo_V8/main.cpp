/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on February 2nd, 2024
 * Purpose: Bingo Project  
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

// Function to generate a random number between min and max (inclusive)
int genRanNum(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(0)); // Seed for random number generation
    const int grdSize = 5; // Size of the bingo grid
    const int numsPerRow = 5; // Number of numbers per row/column in the grid
    
    // Game statistics variables
    int roundsPlayed = 0; // Number of rounds played
    int wins = 0; // Number of wins
    int numbersDrawn = 0; // Total number of numbers draw
    
    // // Read game statistics from file
    std::ifstream inputFile("game_stats.txt");
    if (inputFile.is_open()) {
        inputFile >> roundsPlayed >> wins >> numbersDrawn;
        inputFile.close();
    } else {
        std::cout << "Unable to open file. Starting with default game statistics.\n";
    }
    
// Initialize the bingo grid
    int bingGrid[grdSize][grdSize];
    for (int i = 0; i < grdSize; ++i) {
        for (int j = 0; j < grdSize; ++j) {
            
// Generation of a unique number for a random cell 
    bingGrid[i][j] = genRandNum(j * numsPerRow + 1, (j + 1) * numsPerRow);
        }
    }
    
    std::cout << "Welcome to Bingo!\n";
    
    // Simulate drawing numbers until a win condition is met
    while (true) {
        int drawnNum = genRandNum(1, grdSize * numsPerRow); // generate random number 
        std::cout << "The drawn number is: " << drawnNum << "\n";
        ++numbersDrawn;

    
    //Win Conditions 
        bool win = false;
        for (int i = 0; i < grdSize; ++i) {
            bool rowWin = true, colWin = true;
        for (int j = 0; j < grdSize; ++j) {
            if (bingGrid[i][j] != drawnNum) // Analyze the row
                    rowWin = false;
            if (bingGrid[j][i] != drawnNum) // Analyze the column
                    colWin = false;
 }
            if (rowWin || colWin) {
                win = true;
                break;
            }
        }
         if (win) {
            std::cout << "Bingo! You are the winner!\n";
            break;
        }

        std::cout << "No winner yet. Continue drawing numbers...\n";
    }
    
    // Save game statistics to file
    std::ofstream outputFile("game_stats.txt");
    if (outputFile.is_open()) {
        outputFile << roundsPlayed << " " << wins << " " << numbersDrawn;
        outputFile.close();
    } else {
        std::cout << "Unable to save game statistics to file.\n";
    }
    
    std::cout << "Thanks for playing!\n";
    return 0;
}