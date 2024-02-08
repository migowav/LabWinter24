/* 
 * File:   main.cpp
 * Author: miguel flores
 * Created on: 7th february, 2024
 * Purpose:  Binary Search
 */

//System Libraries
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0 && i != arr.size() - 1) {
            cout << endl;
        }
    }
    cout << endl;
}

int binarySearch(const vector<int>& arr, int val) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == val) {
            return mid; // Return the index 
        } else if (arr[mid] < val) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if value is not found
}

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    vector<int> array;
    int num;

    // Input array elements
    while (cin >> num) {
        array.push_back(num);
    }

    // Sort the array
    selectionSort(array);

    // Display sorted array
    cout << "Sorted Array:" << endl;
    printArray(array);

    // Input the value to find array
    int val;
    cout << "Input the value to find in the array: ";
    cin >> val;

    // Perform binary search
int index = binarySearch(array, val);

// Output the result
if (index != -1) {
    cout << val << " was found at indx = " << index + 1 << endl; 
} else {
    cout << val << " was not found in the array." << endl;
}

    return 0;
}