/*
 * Purpose  : Find sum of series 1 + 2^1 + 2^2 + ... + 2^n
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>

int main() {
    int n, i;
    long long sum = 1, power = 1;

    printf("Enter n value (<=30): ");
    scanf("%d", &n);

    if(n > 30) {
        printf("n value should not exceed 30");
        return 0;
    }

    for(i = 1; i <= n; i++) {
        power = power * 2;
        sum = sum + power;
    }

    printf("Sum of series = %lld", sum);

    return 0;
}

