/*
 * Purpose : Implement MyString class with deep copy
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char *data;
    unsigned int len;

public:
    // Default constructor
    MyString() {
        len = 0;
        data = new char[1];
        data[0] = '\0';
    }

    // Single parameterized constructor
    MyString(const char *str) {
        len = strlen(str);
        data = new char[len + 1];
        strcpy(data, str);
    }

    // Copy constructor (Deep Copy)
    MyString(const MyString &obj) {
        len = obj.len;
        data = new char[len + 1];
        strcpy(data, obj.data);
    }

    // Destructor
    ~MyString() {
        delete [] data;
    }

    // Returns length
    unsigned int size() const {
        return len;
    }

    // Returns C-style string
    const char* cStr() const {
        return data;
    }

    // Display function
    void disp() const {
        cout << "Length: " << len << endl;
        cout << "Data  : " << data << endl;
    }
};

int main() {
    MyString s1;                 // default constructor
    MyString s2("Hello");        // parameterized constructor
    MyString s3 = s2;            // copy constructor (deep copy)

    cout << "s1:" << endl;
    s1.disp();

    cout << "\ns2:" << endl;
    s2.disp();

    cout << "\ns3 (copy of s2):" << endl;
    s3.disp();

    return 0;
}

