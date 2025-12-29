/*
 * Purpose:Implement the class BankAccount with the given data and methods as given below.
		Data:
	    	Account number
			Account holder name
			Balance
        Provide functions to:
			setAccount --> Initial value of number, name and balance, 
        	Deposit money
        	Withdraw money
        	Display balance

 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;

class BankAccount {
    int accNo;
    char name[25];
    double balance;

public:
    void setAccount(int a, const char n[], double b) {
        accNo = a;
        balance = b;
        int i = 0;
        while (n[i] != '\0') {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';
    }

    void deposit(double amt) {
        balance += amt;
    }

    void withdraw(double amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance" << endl;
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.setAccount(101, "Harshinie", 5000);
    acc.display();

    acc.deposit(2000);
    acc.withdraw(1000);

    cout << "\nAfter Transactions:\n";
    acc.display();

    return 0;
}

