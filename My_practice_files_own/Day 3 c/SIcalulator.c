/*
 * Purpose  : Calculate Simple Interest and Total Amount
 * Author   : Harshini M
 * Date     : 23-12-2025
 */
#include <stdio.h>
int main(){
	float p, n, r, amount, interest;
	 printf("Enter Principal: ");
	 scanf("%f", &p);
	 printf("Enter Rate: ");
	 scanf("%f", &r);
	 printf("Enter Time: ");
	 scanf("%f", &n);

	 interest = ( p * n * r )/100;
	 amount = p + interest;

	 printf("Simple Interest = %.2f\n", interest);
	 printf("Total Amount = %.2f", amount);
	 return 0;
}
