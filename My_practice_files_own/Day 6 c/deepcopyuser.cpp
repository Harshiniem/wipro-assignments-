/*
 * Purpose : Demonstrate deep copy
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */

#include <iostream>
using namespace std;

class Sample {
public:
    int *ptr;

    Sample(int val) {
        ptr = new int(val);
    }

    // Copy Constructor (Deep Copy)
    Sample(const Sample &obj) {
        ptr = new int(*obj.ptr);
    }

    void display() {
        cout << "Value = " << *ptr << endl;
    }

    ~Sample() {
        delete ptr;
    }
};

int main() {
    Sample obj1(10);
    Sample obj2 = obj1;   // deep copy

    obj2.display();
    return 0;
}

