/*
 * Purpose  : Print first n Fibonacci numbers
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");
    for(i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

