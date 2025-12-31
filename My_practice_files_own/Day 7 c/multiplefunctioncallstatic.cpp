/*
 * Purpose : To demonstrate the use of static local variable in a function
 * Program Question :
 *      Write a program to show how a static variable inside a function
 *      retains its value between multiple function calls.
 *
 * Author  : Harshinie M
 * Date    : 30-12-2025
 */

#include <iostream>
using namespace std;

// Function declaration
int fun();

int main(){
    // Calling fun() multiple times
    cout << "fun() " << fun() << endl;
    cout << "fun() " << fun() << endl;
    cout << "fun() " << fun() << endl;
    cout << "fun() " << fun() << endl;

    return 0;
}

// Function definition
int fun(){
    // Static local variable
    // It is initialized only once and retains its value between calls
    static int var = 10;

    // Return the current value and then increment it
    return var++;
}

