/*
 * Purpose : Demonstrate friend function
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */

#include <iostream>
using namespace std;

class Box {
    int length;   // private data

public:
    Box(int l) {
        length = l;
    }

    // Friend function declaration
    friend void showLength(const Box &b);
};

// Friend function definition (non-member)
void showLength(const Box &b) {
    cout << "Length = " << b.length << endl;
}

int main() {
    Box b1(10);
    showLength(b1);

    return 0;
}

