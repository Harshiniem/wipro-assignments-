/*
 * Purpose: Find largest and smallest number in an array
 * Author: Harshinie M
 * Date: 27/12/2025
 */

#include <stdio.h>

int main() {
    int arr[10] = {69, 36, 20, 44, 60, 87, 38, 43, 1, 16};
    int i, largest = arr[0], smallest = arr[0];

    for(i = 1; i < 10; i++) {
        if(arr[i] > largest) largest = arr[i];
        if(arr[i] < smallest) smallest = arr[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}

