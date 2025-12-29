/*
 * Purpose: Demonstrate difference between global and local variables using scope resolution operator
 * Author: Harshinie M
 * Date: 24/12/2025
 */

#include <iostream>
using namespace std;

int var = 100;  // Global variable

int main(){
    int var = 200;  // Local variable
    cout << "var: " << var << "\t::var: " << ::var << endl;
}

