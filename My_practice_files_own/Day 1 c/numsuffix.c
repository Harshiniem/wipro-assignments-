/*
 * Purpose: Print a number with correct suffix (st, nd, rd, th)
 * Author: Harshinie M
 * Date: 19/12/2025
 */
#include <stdio.h>
int  main(){
	int num;
	int lasttwo, lastone;
	printf("enter num:");
	scanf("%d", &num);

	lasttwo = num % 100;
	lastone = num % 10;

	if (lasttwo >= 11 && lasttwo <= 13){
		printf("%dth\n", num);
	}
	else if (lastone == 1) {
		printf("%dst\n", num);
	}
	else if (lastone == 2) {
                printf("%dnd\n", num);
        }
	else if (lastone == 3) {
                printf("%drd\n", num);
        }
	else{
                printf("%dth\n", num);
        }
	return 0;
}




