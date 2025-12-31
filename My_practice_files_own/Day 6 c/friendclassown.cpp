/*
 * Purpose : Demonstrate friend class
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */

#include <iostream>
using namespace std;

class Account {
    int balance;   // private

public:
    Account(int b) {
        balance = b;
    }

    // Friend class declaration
    friend class Auditor;
};

class Auditor {
public:
    void showBalance(const Account &a) {
        cout << "Balance = " << a.balance << endl;
    }
};

int main() {
    Account acc(5000);
    Auditor aud;

    aud.showBalance(acc);

    return 0;
}

