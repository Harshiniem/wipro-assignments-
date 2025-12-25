/*
 * Purpose : Check whether a given number is prime or not
 * Author  : Harshinie M
 * Date    : 19/12/2025
 */

#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;   // assume prime

    printf("Enter a num: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime\n", num);
    else
        printf("%d is NOT a prime\n", num);

    return 0;
}

