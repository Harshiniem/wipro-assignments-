/*
 * Purpose : Demonstrate namespaces and scope resolution operator
 * Author  : Harshinie M
 * Date    : 24/12/2025
 */

#include <iostream>
using namespace std;

namespace Mine{
    int var = 100;
    void fun();
}

namespace Yours{
    int var = 200;
    void fun();
}

namespace Ours{
    int var = 300;
    void fun();
}

int var = 1000;   // global variable
void fun();       // global function

int main(){
    cout << "global Var: " << ::var << endl;
    cout << "Mine::var: " << Mine::var << endl;
    cout << "Yours::var: " << Yours::var << endl;
    cout << "Ours::var: " << Ours::var << endl;

    fun();
    Mine::fun();
    Yours::fun();
    Ours::fun();

    return 0;
}

void fun(){
    cout << "void fun()...\n";
}

void Mine::fun(){
    cout << "void Mine::fun()...\n";
}

void Yours::fun(){
    cout << "void Yours::fun()...\n";
}

void Ours::fun(){
    cout << "void Ours::fun()...\n";
}

