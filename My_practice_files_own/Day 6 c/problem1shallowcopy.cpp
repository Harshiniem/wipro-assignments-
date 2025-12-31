/*
 * Purpose : Demonstrate shallow copy and copy constructor calls
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */
#include <iostream>
#include <cstring>
using namespace std;

class Resource {
public:
	char *ptr;

	Resource(const char *data){
		ptr = new char [strlen(data) + 1];
		strcpy(ptr, data);
		cout << "constructor called for: " << ptr << endl;
	}

	void display(){
		cout << "Resource: " << ptr << endl;
	
	}

	~Resource(){
		cout  << "Destructor called for: " << (ptr ? ptr : "NULL") << endl;
		delete [] ptr;
	}
};
void func(Resource r){
	cout << "Inside func()" << endl;
	r.display();
}

int main(){
	Resource r1("CPU");
	cout << "Passing object by value to func()" << endl;
	func(r1);

	cout << "End of main" << endl;
	return 0;
}
