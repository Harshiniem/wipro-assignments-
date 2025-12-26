/*
 * Purpose: Check whether a number is even or odd
 * Author: Harshinie M
 * Date: 19/12/2025
 */
#include <stdio.h>
int main(){
	int num;
	printf("enter number:");
	scanf("%d", &num);
	if ( num % 2 == 0){
		printf("%d is even", num);
	}
	else{
		printf("%d is odd", num);
	}
	return 0;
}
