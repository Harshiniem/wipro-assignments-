/*
 * Purpose: Reverse the elements of an array
 * Author: Harshinie M
 * Date: 27/12/2025
 */

#include <stdio.h>

int main() {
    int arr[10] = {69, 36, 20, 44, 60, 87, 38, 43, 1, 16};
    int i;

    printf("Reversed array: ");
    for(i = 9; i >= 0; i--)
        printf("%d  ", arr[i]);
    printf("\n");

    return 0;
}

