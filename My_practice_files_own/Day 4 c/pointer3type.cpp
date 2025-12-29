/*
 * Purpose: 
 * 1. Declare 3 pointer variables of different data types and initialize them.
 * 2. Try copying one type of pointer to another without typecasting.
 * 3. Use typecasting to copy pointers in C++ style.
 * Author: Harshinie M
 * Date: 24/12/2025
 */

#include <iostream>
using namespace std;

int main() {
    int i = 10;
    double d = 20.5;
    char c = 'A';

    int *iPtr = &i;
    double *dPtr = &d;
    char *cPtr = &c;

    cout << "Initial pointer values:" << endl;
    cout << "iPtr points to: " << *iPtr << endl;
    cout << "dPtr points to: " << *dPtr << endl;
    cout << "cPtr points to: " << *cPtr << endl;

    // Copying without typecasting (will give warning/error in C++)
    // iPtr = dPtr; // Uncommenting this will cause a compile-time error in C++

    // Copying with typecasting (C++ style)
    iPtr = static_cast<int *>(reinterpret_cast<void *>(dPtr)); // converting double* to void* then to int*
    cout << "\nAfter casting, iPtr points to: " << *iPtr << " (unsafe!)" << endl;

    return 0;
}

