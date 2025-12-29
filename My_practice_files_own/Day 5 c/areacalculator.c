/* 
 * Purpose: Area Calculator(function overloading)
		Create overloaded functions named area() to calculate:
			Area of a square
			Area of a rectangle
			Area of a circle 
 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;
//Area of square
int area(int side){
	return side * side;
}
//Area of rectangle
int area(int length, int breadth){
	return length * breadth;
}
//Area of circle 
double area(double radius){
	return 3.14 * radius * radius;
}

int main(){
	cout << "area of square: " << area(6) << endl;
	cout << "area of rectangle: " << area(10, 30) << endl;
	cout << "area of circle: " << area(4.5) << endl;

	return 0;
}
