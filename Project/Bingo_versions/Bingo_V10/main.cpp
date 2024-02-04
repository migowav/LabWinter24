/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on February 3rd, 2024
 * Purpose: Bingo Project  
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

// Function to generate a random number between min and max (inclusive)
int genRnd(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int main() {
    srand(time(0)); // Prepare for generating random numbers
    const int grdSz = 5; // Number of rows and columns in the bingo grid
    const int numsPrR = 5; // Number of numbers per row/column in the grid
    
    // Variables to track game statistics
    int rndsPl = 0; // Number of rounds played
    int wins = 0; // Number of wins
    int numsDrwn = 0; // Total number of numbers drawn
    float plyrScr=0.0f;// the player's score
    
    // Read game statistics from a file
    std::ifstream inF("game_stats.txt");
    if (inF.is_open()) { //check if the file is open
        inF >> rndsPl >> wins >> numsDrwn; //game stats
        inF.close(); //close file 
    } else {
        std::cout << "Could not open file. Starting with default game statistics.\n";
    }
    
    // Initialize the bingo grid with random numbers
    int bngGd[grdSz][grdSz];
    for (int i = 0; i < grdSz; ++i) { //loop through each individual row
        for (int j = 0; j < grdSz; ++j) { //loop through each individual column
            
            // Generate a unique number for each cell in the grid
            bngGd[i][j] = genRnd(j * numsPrR + 1, (j + 1) * numsPrR);
        }
    }
    
    std::string plyrNm; //Player can input their name
    
    std::cout << "Welcome to Bingo!\n";
    
    // Validate user input for player's name
    do {
        std::cout << "Please enter your name: ";
        std::getline(std::cin, plyrNm); // Get player's name
        if (plyrNm.empty()) {
            std::cout << "Invalid name. Please try again.\n"; //error message if no name is entered 
        }
    } while (plyrNm.empty());
    
    std::cout << "Hello, " << plyrNm << "! Let's start the game!\n";
    
    // Display the bingo grid
    std::cout << "Bingo Grid:\n";
    for (int i = 0; i < grdSz; ++i) { //loop through each row
        for (int j = 0; j < grdSz; ++j) { //loop through each column
            std::cout << std::setw(4) << bngGd[i][j]; // output grid 
        }
        std::cout << std::endl;
    }
    
    // Simulate drawing numbers until a win condition is met
    while (true) {
        int drwnNum = genRnd(1, grdSz * numsPrR); // Generate a random number
        std::cout << "The drawn number is: " << drwnNum << "\n";
        ++numsDrwn; // Keep track of the total number of drawn numbers
        
        // Check if the drawn number matches any row or column in the grid
        bool rwWin = false;
        bool colWin = false;
        for (int i = 0; i < grdSz; ++i) { // looping of each row
            bool rwMtch = true;
            bool colMtch = true;
            for (int j = 0; j < grdSz; ++j) { // looping through each column
                if (bngGd[i][j] != drwnNum) // Check the row
                    rwMtch = false; // update row match status
                if (bngGd[j][i] != drwnNum) // Check the column
                    colMtch = false; //update column match status
            }
            if (rwMtch)
                rwWin = true; //update row win status
            if (colMtch)
                colWin = true; //update column win status
        }
        
        if (rwWin || colWin) {
            if (rwWin && colWin) {
                std::cout << "Bingo! " << plyrNm << " won by matching both a row and a column!\n";
            } else if (rwWin) {
                std::cout << "Bingo! " << plyrNm << " won by matching a row!\n";
            } else {
                std::cout << "Bingo! " << plyrNm << " won by matching a column!\n";
            }
            break; // Exit the loop when a win occurs
        }

        std::cout << "No winner yet. Keep drawing numbers...\n";
    }
    
    // Save game statistics to a file
    std::ofstream outF("game_stats.txt"); // open file to implement new stats
    if (outF.is_open()) {
        outF << rndsPl << " " << wins << " " << numsDrwn; //inputting the game stats
        outF.close(); // close file
    } else {
        std::cout << "Could not save game statistics to file.\n"; // error display message
    }
    
    std::cout << "Thanks for playing!\n"; //output message 
    return 0;
}  