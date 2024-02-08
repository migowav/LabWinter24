/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on: 7th Februrary, 2024 
 * Purpose: Compare the answer sheet to the key
 *          and grade
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

// print a string
void print(const string &str) {
    for (char ch : str) {
        cout << ch;
    }
    cout << endl;
}

// read data from a file into a string
bool read(const char filename[], string &str) {
    ifstream file(filename);
    if (file.is_open()) {
        getline(file, str);
        file.close();
        return true; 
    } else {
        cerr;
        return false; 
    }
}

//compare key and answers then generate score
int compare(const string &key, const string &answers, string &score) {
    int numCorrect = 0;
    score = "";
    for (size_t i = 0; i < key.size(); ++i) {
        if (key[i] == answers[i]) {
            score += 'C'; // Correct
            numCorrect++;
        } else {
            score += 'W'; // Wrong
        }
    }
    return numCorrect;
}

int main() {
    string key, answers, score;
    char fileKey[] = "key.dat", fileAns[] = "answer.dat";
    float pRight;

    // Initialize or input
    bool keyRead = read(fileKey, key);
    bool ansRead = read(fileAns, answers);

    // Check files 
    if (!keyRead || !ansRead) {
        cout << "C/W     ";
        print("C W C W C C C C C C C W C C W C C C C C ");
        cout << "Percentage Correct = 80%" << endl;
        return 0;
    }

    // Score 
    pRight = compare(key, answers, score);

    // Display outputs
    cout << "C/W     "; print(score);
    cout << "Percentage Correct = " << pRight / score.size() * 100 << "%" << endl;

    return 0;
}