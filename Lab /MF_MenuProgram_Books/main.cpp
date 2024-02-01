/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 17, 2024
 * Purpose:  Books
 */

//System Libraries
#include <iostream>
using namespace std;

// Function prototype for the Book Worm Points
void bookWormPoints();

int main(int argc, char** argv) {
    unsigned char option, nOptions;

    nOptions = '1'; // In this case, we have 1 option
    do {
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Book Worm Points" << endl;
        cout << "etc....." << endl;
        cin >> option;

        switch (option) {
            case '1':
                bookWormPoints(); // Call function for Book Worm Points
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOptions);

    return 0;
}

void bookWormPoints() {
    // Code for Book Worm Points
    int numBooks;
    int points = 0;

    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> numBooks;

    if (numBooks == 0) {
        points = 0;
    } else if (numBooks == 1) {
        points = 5;
    } else if (numBooks == 2) {
        points = 15;
    } else if (numBooks == 3) {
        points = 30;
    } else if (numBooks >= 4) {
        points = 60;
    }

    cout << "Books purchased = " << numBooks << endl;
    cout << "Points earned   = " << points << endl;
}