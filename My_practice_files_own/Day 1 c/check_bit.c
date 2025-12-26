/*
 * Purpose: Check whether a given bit position in a number is ON or OFF
 * Author: Harshinie M
 * Date: 19/12/2025
 */
#include <stdio.h>
int main(){
	int num = 10;
	int pos = 3;
	if (num & (1 << pos)){
	
		printf("%d in %d is on", pos, num);
	}
	else{
		printf("off");
	}
	return 0;
}

