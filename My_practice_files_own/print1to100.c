/*
 * Purpose: Print numbers from 1 to 100 using for, while and do-while loops
 * Author: Harshinie M
 * Date: 19/12/2025
 */
#include <stdio.h>
int main(){
	int i;
	//for loop
	printf("for loop\n");
	for (i=1; i<=100; i++)
		printf("%d ", i);
	printf("\n\n");
	//while loop
	printf("while loop\n");
	i = 1;
	while (i <= 100){
		printf("%d ", i);
		i++;
	}
	printf("\n\n");
	//do while loop
	printf("do while loop\n");
	i = 1;
	do {
		printf("%d ", i);
		i++;
	}
	while ( i <= 100);
	printf("\n");
	return 0;
}


