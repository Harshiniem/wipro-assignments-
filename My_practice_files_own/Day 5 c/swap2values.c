/*
 * Purpose: swap 2 values 
		void swap(int *, int *);
		void swap(int &, int &);
 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;

// Version 1: Pass by Pointer
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Version 2: Pass by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    int p = 100, q = 200;

    // Using Pointer Version
    cout << "--- Pointer Swap ---" << endl;
    cout << "Before: x=" << x << ", y=" << y << endl;
    swapByPointer(&x, &y); // Must pass addresses using &
    cout << "After:  x=" << x << ", y=" << y << endl << endl;

    // Using Reference Version
    cout << "--- Reference Swap ---" << endl;
    cout << "Before: p=" << p << ", q=" << q << endl;
    swapByReference(p, q); // Just pass the variables directly
    cout << "After:  p=" << p << ", q=" << q << endl;

    return 0;
}
