/*
 * Purpose : Calculate factorial using recursion
 * Author  : Harshinie M
 * Date    : 22/12/2025
 */

#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial = %d\n", factorial(num));
    return 0;
}

