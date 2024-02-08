/* 
 * File:   main.cpp
 * Author: Miguel Flores
 * Created on: 7th february, 2024
 * Purpose: standard deviation
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

const float MAXRAND = 99.0f; // Max random number for array elements

void initTestCase1(float arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = static_cast<float>(i); // Input values 0 to 19
    }
}

void initTestCase2(float arr[], int size) {
    float inputValues[] = {24.0f, 12.0f, 80.0f, 79.0f, 19.0f, 26.0f, 48.0f, 20.0f, 91.0f, 10.0f,
                           47.0f, 31.0f, 84.0f, 93.0f, 47.0f, 86.0f, 44.0f, 24.0f, 54.0f, 97.0f};
    for (int i = 0; i < size; ++i) {
        arr[i] = inputValues[i]; 
    }
}

void print(float arr[], int size, int perLine) {
    cout << fixed << setprecision(7); // 7 decimal places
    for (int i = 0; i < size; ++i) {
        cout << setw(10) << arr[i] << ((i + 1) % perLine == 0 ? '\n' : ' ');
    }
    cout << endl;
}

float avgX(float arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

float stdX(float arr[], int size) {
    float mean = avgX(arr, size);
    float sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += pow(arr[i] - mean, 2);
    }
    return sqrt(sum / (size - 1));
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    const int SIZE1 = 20;
    float test1[SIZE1];
    initTestCase1(test1, SIZE1);

    cout << "The average            = " << fixed << setprecision(7) << avgX(test1, SIZE1) << endl;
    cout << "The standard deviation = " << fixed << setprecision(7) << stdX(test1, SIZE1) << endl;

    return 0;
}