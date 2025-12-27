/*
 * Purpose : Demonstrate nesting of loops
 * Author  : Harshinie M
 * Date    : 22/12/2025
 */
#include <stdio.h>
int main(){
	int i, j;
	for (i=1; i<=3; i++){
		for (j=1; j<=3; j++){
			printf("%d ", j);
		}
	        printf("\n");
	}
	return 0;
}
