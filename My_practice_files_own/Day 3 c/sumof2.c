/*
 * Purpose  : Find sum of two numbers entered by the user
 * Author   : Harshini M
 * Date     : 23-12-2025
 */
#include <stdio.h>
int main(){
	int a, b;
	printf("enter a value:");
	scanf("%d", &a);
	printf("enter b value:");
	scanf("%d", &b);
	
	int sum = a+b;
	printf("sum: %d\n", sum);
	return 0;
}
