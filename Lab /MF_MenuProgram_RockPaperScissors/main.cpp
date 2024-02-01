/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 17, 2024
 * Purpose:  RockPaperScissors
 */

//System Libraries
#include <iostream>
using namespace std;

// Function prototype for the Rock Paper Scissors Game
void rockPaperScissors();

int main(int argc, char** argv) {
    unsigned char option, nOptions;

    nOptions = '1'; // In this case, we have 1 option
    do {
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Rock Paper Scissors Game" << endl;
        cout << "etc....." << endl;
        cin >> option;

        switch (option) {
            case '1':
                rockPaperScissors(); // Call function for Rock Paper Scissors Game
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOptions);

    return 0;
}

void rockPaperScissors() {
    // Code for Rock Paper Scissors Game
    char p1, p2;
    string msg;

    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;

    cin >> p1 >> p2;
    msg = "Nothing";

    msg = p1 == p2 ? "Nobody wins." : msg;
    p1 -= p1 >= 97 ? 32 : 0;
    p2 -= p2 >= 97 ? 32 : 0;

    if (p1 == 'R') {
        if (p2 == 'P') msg = "Paper covers rock.";
        if (p2 == 'S') msg = "Rock breaks scissors.";
    } else if (p1 == 'P') {
        if (p2 == 'R') msg = "Paper covers rock.";
        if (p2 == 'S') msg = "Scissors cuts paper.";
    } else if (p1 == 'S') {
        if (p2 == 'R') msg = "Rock beats Scissors.";
        if (p2 == 'P') msg = "Scissors cuts paper.";
    }

    cout << msg << endl;
}
