/*
 * Purpose: Print numbers from 1 to 10 using recursion
 * Author : Harshinie M
 * Date   : 22/12/2025
 */

#include <stdio.h>

/* Recursive function to print 1 to 10 */
void print1to10(int n) {
    if(n > 10)
        return; // base condition
    printf("%d ", n);
    print1to10(n + 1); // recursive call
}

int main() {
    printf("Numbers from 1 to 10: ");
    print1to10(1);
    printf("\n");
    return 0;
}

