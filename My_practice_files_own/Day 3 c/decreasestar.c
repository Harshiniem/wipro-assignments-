/*
 * Purpose  : Print decreasing star pattern
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

