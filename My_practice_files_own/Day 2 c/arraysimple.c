/*
 * Purpose : Store 100 consecutive integers in an array
 * Author  : Harshinie M
 * Date    : 22/12/2025
 */

#include <stdio.h>

int main() {
    int arr[100];
    int i;

    printf("Enter the first value: ");
    scanf("%d", &arr[0]);

    for (i = 1; i < 100; i++) {
        arr[i] = arr[i - 1] + 1;
    }

    for (i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

