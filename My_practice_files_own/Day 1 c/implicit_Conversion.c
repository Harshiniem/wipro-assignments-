/*
 * Purpose: 	Experiment with different data types, observing implicit conversion behavior.
 * Author: Harshinie M
 * Date: 19/12/2025
 */
#include <stdio.h>
int main(){
	int i = 5;
	float f = 2.5;
	char c = 'A';

	printf("int + float = %f\n", i + f);
	printf("char + int = %d\n", c + i);

	return 0;

}
