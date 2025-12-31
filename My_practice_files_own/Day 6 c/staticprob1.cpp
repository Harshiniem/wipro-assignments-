/*
 * Purpose : Demonstrate static members in a class
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */

#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    double sal;                 // instance members

    static string companyName;  // class member

public:
    Employee(int i, string n, double s) {
        id = i;
        name = n;
        sal = s;
    }

    void display() const {
        cout << id << " " << name << " " << sal << " " << companyName << endl;
    }

    static string company() {
        return companyName;
    }
};

// Definition of static data member
string Employee::companyName = "Wipro Ltd";

int main() {
    Employee e1(101, "Arun", 50000);
    Employee e2(102, "Divya", 60000);

    e1.display();
    e2.display();

    cout << "Company: " << Employee::company() << endl;

    return 0;
}

