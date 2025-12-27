/*
 * Purpose : Demonstrate nested loops with number pattern
 * Author  : Harshinie M
 * Date    : 22/12/2025
 */

#include <stdio.h>

int main() {
    int i, j;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n; i < n+10; i++) {  // outer loop for rows
        for(j = 0; j < 10; j++) { // inner loop for columns
            printf("%d\t", i * (j+1));
        }
        printf("\n");
    }

    return 0;
}

