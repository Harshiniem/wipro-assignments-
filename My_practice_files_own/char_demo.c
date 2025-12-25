/*
 * Purpose: Demonstrate the usage of char data type and ASCII values in C
 * Author: Harshinie M
 * Date: 19/12/2025
 */
#include <stdio.h>
int main(){
	char a = 'A';
	char b = 'a';
	char c = '6';
	printf("%c %d\n", a, a);
	printf("%c %d\n",b ,b);
	printf("%c %d\n",c ,c);
	char d = a + 1;
	printf("%c",d);
	return 0;
}
