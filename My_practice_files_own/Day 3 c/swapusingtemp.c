/*
 * Purpose  : Swap two numbers using temporary variable
 * Author   : Harshini M
 * Date     : 23-12-2025
 */
#include <stdio.h>
int main(){
	int a, b, temp;
	printf("Enter first number: ");
	scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

	temp = a;
	a = b;
	b = temp;

	printf("After Swapping:\n");
        printf("First number = %d\n", a);
        printf("Second number = %d", b);

        return 0;
}
