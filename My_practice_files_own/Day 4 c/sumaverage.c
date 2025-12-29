/*
 * Purpose: Calculate sum and average of an array
 * Author: Harshinie M
 * Date: 27/12/2025
 */

#include <stdio.h>

int main() {
    int arr[10] = {69, 36, 20, 44, 60, 87, 38, 43, 1, 16};
    int sum = 0, i;
    double average;

    for(i = 0; i < 10; i++)
        sum += arr[i];

    average = sum / 10.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

