/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 17, 2024
 * Purpose:  Name Sorter 
 */

//System Libraries
#include <iostream>
using namespace std;

// Function prototype for the Name Sorter
void nameSorter();

int main(int argc, char** argv) {
    unsigned char option, nOptions;

    nOptions = '1'; // In this case, we have 1 option
    do {
        cout << "Choose from the options displayed" << endl;
        cout << "1 -> Name Sorter" << endl;
        cout << "etc....." << endl;
        cin >> option;

        switch (option) {
            case '1':
                nameSorter(); // Call function for Name Sorter
                break;
            default:
                cout << endl << "Exit Program" << endl << endl;
        }
    } while (option <= nOptions);

    return 0;
}

void nameSorter() {
    // Code for Name Sorter
    string name1, name2, name3;

    cout << "Sorting Names" << endl;
    cin.ignore(); // Clear buffer
    getline(cin, name1);
    getline(cin, name2);
    getline(cin, name3);

    if (name1 > name2) swap(name1, name2);
    if (name1 > name3) swap(name1, name3);
    if (name2 > name3) swap(name2, name3);

    cout << "Sorted Names" << endl;
    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << endl;
}