/*
 * Purpose  : Find sum of first n natural numbers
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n value: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}

