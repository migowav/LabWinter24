/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on January 18, 2024
 * Purpose:  Sales Bar Chart
 */

//System Libraries
#include <iostream>
using namespace std;

// Function to get sales input for a specific store
int getSales(int storeNumber) {
    int sales;
    cout << "Enter today's sales for store " << storeNumber << ": ";
    cin >> sales;
    return sales;
}

// Function to display the sales bar chart for a specific store
void displayBarChart(int storeNumber, int sales) {
    cout << "Store " << storeNumber << ": ";
    for (int i = 0; i < sales / 100; ++i) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    const int NUM_STORES = 5;
    int sales[NUM_STORES];

    // Input sales for each store
    for (int i = 0; i < NUM_STORES; ++i) {
        cout << "Enter today's sales for store " << i + 1 << ": ";
        cin >> sales[i];
    }

    // Display sales bar chart
    cout << "\nSALES BAR CHART (Each * = $100)\n";
    for (int i = 0; i < NUM_STORES; ++i) {
        cout << "Store " << i + 1 << ": ";
        for (int j = 0; j < sales[i] / 100; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
