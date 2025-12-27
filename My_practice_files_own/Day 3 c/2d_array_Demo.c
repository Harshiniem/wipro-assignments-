/*
 * Purpose  : Demonstrate all basic 2D array operations in one program
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j;

    /* Matrix Representation */
    printf("Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    /* Row-wise Printing */
    printf("\nRow-wise Printing:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    /* Column-wise Printing */
    printf("\nColumn-wise Printing:\n");
    for(j = 0; j < 3; j++) {
        for(i = 0; i < 3; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    /* Transpose of Matrix */
    printf("\nTranspose of Matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    /* Diagonal Elements */
    printf("\nDiagonal Elements:\n");
    for(i = 0; i < 3; i++) {
        printf("%d ", a[i][i]);
    }

    /* Pattern Printing */
    printf("\n\nPattern Printing:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j <= i; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

