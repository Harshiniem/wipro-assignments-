/*
 * Purpose : Add all numbers below 1000000 that are multiples of both 5 and 7
 *           using LCM stepping method
 * Author  : Harshinie M
 * Date    : 19/12/2025
 */
#include <stdio.h>
int main(){
	int sum = 0;
	int i;
	for (i = 35; i <1000000; i += 35 ){
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}
