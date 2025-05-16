/* \file lab5Fri.cpp
* \brief This file contains
* \author Elizaveta
* \date 16 May 2025
* \copyright University of Nicosia.
*/

#include <iostream>
using namespace std;

/**
* function main
* @return zero
*/
int main() {
    int choice;

    do {
        cout << "\n1) Enter data";
        cout << "\n2) Sum of negative numbers";
        cout << "\n3) Exit";
        cout << "\nEnter choice:";
        cin >> choice;

        switch (choice) {
        case 1:
            break;
        case 2:
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


