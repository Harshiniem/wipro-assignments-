/*
 * Purpose : Demonstrate shallow copy
 * Author  : Harshinie M
 * Date    : 29/12/2025
 */
#include <iostream>
using namespace std;
class Sample {
public:
	int *ptr;
	
	Sample(int val){
		ptr = new int(val);
	}
	
	void display(){
		cout << "value = " << *ptr << endl;
	}
};
int main(){
	Sample obj1(10);
	Sample obj2 = obj1;

	obj2.display();
	return 0;
}
