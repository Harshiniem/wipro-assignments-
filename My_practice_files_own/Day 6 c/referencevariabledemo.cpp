/*
 * Purpose : Demonstrate reference variables
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */
#include <iostream>
using namespace std;
int main(){
	int var = 10;
	int varone =  20;

	int &refone = var;
	int &reftwo = varone;

	refone = 30;
	reftwo = 50;

	cout << "var = " << var << endl;
	cout << "varone = " << varone << endl;
	return 0;
}
