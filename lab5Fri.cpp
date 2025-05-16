/* \file lab5Fri.cpp
* \brief This file contains
* \author Elizaveta
* \date 16 May 2025
* \copyright University of Nicosia.
*/

#include <iostream>
#include <cassert>
using namespace std;

//function prototypes
void enterArray(double nums[],const int size);
double sumOfNeg(const double nums[], const int size);

/**
* function main
* @return zero
*/
int main() {
    int choice;
    const int SIZE = 10;
    double arr[SIZE] = {};

    do {
        cout << "\n1) Enter data";
        cout << "\n2) Sum of negative numbers";
        cout << "\n3) Exit";
        cout << "\nEnter choice:";
        cin >> choice;

        switch (choice) {
        case 1:
            enterArray(arr, SIZE);
            break;
        case 2:
            cout << "\nSum of negative numbers is " << sumOfNeg(arr, SIZE);
            break;
        case 3:
            break;
        default:
            cerr << "\nInvalid choice!";
            break;
        }

    } while (choice != 3);


    return 0;
}

/**
* function enterArray
* @param nums the array to enter data into
* @param size the size of the array
*/
void enterArray(double nums[], const int size) {
    assert(size > 0 && nums!= NULL);

    for (int i = 0; i < size; i++) {
        cout << "\nEnter value [-1.5 -- 3.5] at " << i << ": "; //@todo need user validation
        cin >> nums[i];
    }
}

/**
* function sumOfNeg
* @param nums the array to enter data into
* @param size the size of the array
* @return Returns the final sum of the negative numbers
*/
double sumOfNeg(const double nums[], const int size) {
    assert(size > 0 && nums != NULL);

    double sum = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] < 0) {
            sum += nums[i];
        }
    }

    return sum;
}