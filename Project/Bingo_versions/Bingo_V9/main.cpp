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
    srand(time(0)); // Prepare for generating random numbers
    const int grdSize = 5; // Number of rows and columns in the bingo grid
    const int numsPerRow = 5; // Number of numbers per row/column in the grid
    
    // Variables to track game statistics
    int roundsPlayed = 0; // Number of rounds played
    int wins = 0; // Number of wins
    int numbersDrawn = 0; // Total number of numbers drawn
    
    // Read game statistics from a file
    std::ifstream inputFile("game_stats.txt");
    if (inputFile.is_open()) {
        inputFile >> roundsPlayed >> wins >> numbersDrawn;
        inputFile.close();
    } else {
        std::cout << "Could not open file. Starting with default game statistics.\n";
    }
    
    // Initialize the bingo grid with random numbers
    int bingGrid[grdSize][grdSize];
    for (int i = 0; i < grdSize; ++i) {
        for (int j = 0; j < grdSize; ++j) {
            
            // Generate a unique number for each cell in the grid
            bingGrid[i][j] = genRanNum(j * numsPerRow + 1, (j + 1) * numsPerRow);
        }
    }
    
    std::string playerName; //Player can input their name
    
    std::cout << "Welcome to Bingo!\n";
    
     // Validate user input for player's name
    do {
        std::cout << "Please enter your name: ";
        std::getline(std::cin, playerName); // Get player's name
        if (playerName.empty()) {
            std::cout << "Invalid name. Please try again.\n";
        }
    } while (playerName.empty());
    
    std::cout << "Hello, " << playerName << "! Let's start the game!\n";
    
    // Display the bingo grid
    std::cout << "Bingo Grid:\n";
    for (int i = 0; i < grdSize; ++i) {
        for (int j = 0; j < grdSize; ++j) {
            std::cout << std::setw(4) << bingGrid[i][j];
        }
        std::cout << std::endl;
    }
    
    // Simulate drawing numbers until a win condition is met
    while (true) {
        int drawnNum = genRanNum(1, grdSize * numsPerRow); // Generate a random number
        std::cout << "The drawn number is: " << drawnNum << "\n";
        ++numbersDrawn; // Keep track of the total number of drawn numbers
        
        // Check if the drawn number matches any row or column in the grid
        bool rowWin = false;
        bool colWin = false;
        for (int i = 0; i < grdSize; ++i) {
            bool rowMatch = true;
            bool colMatch = true;
            for (int j = 0; j < grdSize; ++j) {
                if (bingGrid[i][j] != drawnNum) // Check the row
                    rowMatch = false;
                if (bingGrid[j][i] != drawnNum) // Check the column
                    colMatch = false;
            }
            if (rowMatch)
                rowWin = true;
            if (colMatch)
                colWin = true;
        }
        
        if (rowWin || colWin) {
            if (rowWin && colWin) {
                std::cout << "Bingo! " << playerName << " won by matching both a row and a column!\n";
            } else if (rowWin) {
                std::cout << "Bingo! " << playerName << " won by matching a row!\n";
            } else {
                std::cout << "Bingo! " << playerName << " won by matching a column!\n";
            }
            break; // Exit the loop if there's a win
        }

        std::cout << "No winner yet. Keep drawing numbers...\n";
    }
    
    // Save game statistics to a file
    std::ofstream outputFile("game_stats.txt");
    if (outputFile.is_open()) {
        outputFile << roundsPlayed << " " << wins << " " << numbersDrawn;
        outputFile.close();
    } else {
        std::cout << "Could not save game statistics to file.\n";
    }
    
    std::cout << "Thanks for playing!\n";
    return 0;
}  