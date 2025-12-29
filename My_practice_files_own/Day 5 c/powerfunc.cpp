/*
 * Purpose: Power Function
			Create a function power() where:
				Base is mandatory
				Exponent is optional (default = 2)
 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;

int power(int base, int exp = 2) {
    int result = 1;
    for(int i = 1; i <= exp; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    cout << power(5) << endl;
    cout << power(2, 3) << endl;

    return 0;
}

