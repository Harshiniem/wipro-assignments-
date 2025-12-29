/*
 * Purpose: Simple Interest(default arguments)
			Create a function simpleInterest() with:
				Principal
				Rate (default = 5%)
				Time (default = 1 year)
 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;

int si(int p, int n =  1, int r = 5){
	return (p*n*r)/100;
}
int main(){
	cout << "si: " << si(1000) << endl;
	cout << "newsi: " << si(1000, 1, 10) << endl;
	return 0;
}
