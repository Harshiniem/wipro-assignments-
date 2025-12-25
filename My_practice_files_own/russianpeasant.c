/*
 * Purpose: Multiply two numbers using Russian Peasant method
 * Author: Harshinie M
 * Date: 19/12/2025
 */
#include <stdio.h>

int main() {
    int a = 13, b = 24;
    int result = 0;
    printf("Steps:\n");
    while (a > 0) {
        printf("%d\t%d", a, b);

        if (a % 2 != 0) {
            result += b;
            printf("  <-- added");
        }

        printf("\n");

        a = a / 2;
        b = b * 2;
    }

    printf("\nResult = %d\n", result);
    return 0;
}
