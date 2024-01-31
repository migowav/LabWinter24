/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 17th, 2024
 * Purpose: Truth Table  
 */

//System Libraries 
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    bool x, y;

    //Heading
    cout << "X Y !X !Y X||Y X&&Y X^Y X^Y^Y  ETC.... 13 COLUMNS" << endl << endl;

    //Row 1
    x = true;
    y = true;
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x || y ? 'T' : 'F') << " ";
    cout << (x && y ? 'T' : 'F') << " ";
    cout << (x ^ y ? 'T' : 'F') << " ";
    cout << (x ^ y ^ y ? 'T' : 'F') << " ";
    // Continue adding columns as needed
    cout << endl;

    //Row 2
    y = false;
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x || y ? 'T' : 'F') << " ";
    cout << (x && y ? 'T' : 'F') << " ";
    cout << (x ^ y ? 'T' : 'F') << " ";
    cout << (x ^ y ^ y ? 'T' : 'F') << " ";
    // Continue adding columns as needed
    cout << endl;

    //Row 3
    x = false;
    y = true;
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x || y ? 'T' : 'F') << " ";
    cout << (x && y ? 'T' : 'F') << " ";
    cout << (x ^ y ? 'T' : 'F') << " ";
    cout << (x ^ y ^ y ? 'T' : 'F') << " ";
    // Continue adding columns as needed
    cout << endl;

    //Row 4
    x = false;
    y = false;
    cout << (x ? 'T' : 'F') << " ";
    cout << (y ? 'T' : 'F') << "  ";
    cout << (!x ? 'T' : 'F') << "  ";
    cout << (!y ? 'T' : 'F') << "   ";
    cout << (x || y ? 'T' : 'F') << " ";
    cout << (x && y ? 'T' : 'F') << " ";
    cout << (x ^ y ? 'T' : 'F') << " ";
    cout << (x ^ y ^ y ? 'T' : 'F') << " ";
    // Continue adding columns as needed
    cout << endl;

    //Exit the Program
    return 0;
}