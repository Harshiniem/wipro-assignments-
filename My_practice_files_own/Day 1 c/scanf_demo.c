/*
 * Purpose: Demonstrate scanf() for user input
 * Author: Harshinie M
 * Date: 19/12/2025
 */
#include <stdio.h>
int main(){
	int var;
	printf("enter a number:");
	scanf("%d", &var);
	printf("entered value: %d\n", var);
	return 0;
}
