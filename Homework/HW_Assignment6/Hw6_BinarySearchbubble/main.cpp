/* 
 * File:   main.cpp
 * Author: miguel flores
 * Created on: 7th february, 2024 
 * Purpose:  Binary Search bubble
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
            return mid;
        } else if (arr[mid] < val) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if value not found
}

int main() {
    vector<int> array;
    int num;

    // Input array elements
    while (cin >> num) {
        array.push_back(num);
    }

    // Sort array
    sort(array.begin(), array.end());

    // Display sorted array
    cout << "The sorted array is: " << endl;
    printArray(array);

    // Input the value to find in the array
    int val;
    cout << "Input the value to find in the array" << endl;
    cin >> val;

    // Perform binary search
    int index = binarySearch(array, val);

    // Output result
    if (index != -1) {
        cout << val << " was found at indx = " << index << endl;
    } else {
        cout << val << " was not found in the array." << endl;
    }

    return 0;
}