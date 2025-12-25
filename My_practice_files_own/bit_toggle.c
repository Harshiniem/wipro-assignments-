/*
 * Purpose: Toggle a given bit position in a number
 * Author: Harshinie M
 * Date: 19/12/2025
 */
#include <stdio.h>
int main(){
	int num = 10;
	int pos = 3;
	int result = num ^ (1 << pos);
	printf("original is : %d\n", num);
	printf("after toggle is : %d\n", result);
	return 0;
}
