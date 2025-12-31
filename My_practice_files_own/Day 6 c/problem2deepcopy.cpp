/*
 * Purpose : Demonstrate deep copy and safe object copy
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */

#include <iostream>
#include <cstring>
using namespace std;

class Resource {
public:
    char *ptr;

    // Constructor
    Resource(const char *data) {
        ptr = new char[strlen(data) + 1];
        strcpy(ptr, data);
        cout << "Constructor called for: " << ptr << endl;
    }

    // User-defined copy constructor (Deep Copy)
    Resource(const Resource &obj) {
        ptr = new char[strlen(obj.ptr) + 1];
        strcpy(ptr, obj.ptr);
        cout << "Copy constructor called for: " << ptr << endl;
    }

    void display() {
        cout << "Resource: " << ptr << endl;
    }

    ~Resource() {
        cout << "Destructor called for: " << (ptr ? ptr : "NULL") << endl;
        delete [] ptr;
    }
};

// Function to pass object by value
void func(Resource r) {
    cout << "Inside func()" << endl;
    r.display();
}

int main() {
    Resource r1("Memory");
    cout << "Passing object by value to func()" << endl;
    func(r1);   // copy constructor called here (deep copy)

    cout << "End of main" << endl;
    return 0;
}

