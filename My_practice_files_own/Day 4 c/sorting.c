/*
 * Purpose: Sort an array in ascending order
 * Author: Harshinie M
 * Date: 27/12/2025
 */

#include <stdio.h>

int main() {
    int arr[10] = {69, 36, 20, 44, 60, 87, 38, 43, 1, 16};
    int i, j, temp;

    for(i = 0; i < 9; i++) {
        for(j = i+1; j < 10; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < 10; i++)
        printf("%d  ", arr[i]);
    printf("\n");

    return 0;
}

