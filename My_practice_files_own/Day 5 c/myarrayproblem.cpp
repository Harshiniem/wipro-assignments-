/*
 * Purpose:Problem 4:
----------
	Define a class MyArray, you provide constructors (default, single parameterized, copy), printArray(), extend(It will add new contents from an existing array).
	
	class MyArray{
		int arr[100];
		int size;
	public:
		MyArray();
		MyArray(int data);
		MyArray(const MyArray&);
		void printArray();
		void extend(const MyArray&);
	};

 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;

class MyArray {
    int arr[100];
    int size;

public:
    // Default Constructor
    MyArray() {
        size = 0;
    }

    // Single Parameterized Constructor
    MyArray(int data) {
        arr[0] = data;
        size = 1;
    }

    // Copy Constructor
    MyArray(const MyArray &m) {
        size = m.size;
        for(int i = 0; i < size; i++) {
            arr[i] = m.arr[i];
        }
    }

    void printArray() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void extend(const MyArray &m) {
        for(int i = 0; i < m.size; i++) {
            arr[size] = m.arr[i];
            size++;
        }
    }
};
int main() {
    MyArray a;          // default constructor
    MyArray b(10);      // parameterized constructor
    MyArray c(b);       // copy constructor

    cout << "Array b: ";
    b.printArray();

    cout << "Array c (copy of b): ";
    c.printArray();

    a.extend(b);
    a.extend(c);

    cout << "Array a after extend: ";
    a.printArray();

    return 0;
}
