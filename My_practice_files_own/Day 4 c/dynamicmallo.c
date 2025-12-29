/*
 * Purpose: Demonstrate dynamic memory allocation for an integer using new and delete
 * Author: Harshinie M
 * Date: 24/12/2025
 */

#include <iostream>
using namespace std;

int main(){
    int *iPtr = new int(100);  // Allocate memory dynamically and initialize with 100

    cout << "Address: " << iPtr << "\t\tData: " << *iPtr << endl;

    delete iPtr;  // Free the allocated memory
}

