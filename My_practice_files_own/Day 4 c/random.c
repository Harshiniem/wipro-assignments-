/*
 * Purpose: Demonstrate usage of rand() to generate random numbers and store them in a fixed-size array
 * Author: Harshinie M
 * Date: 24/12/2025
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL)); // Seed for random function

    int arr[10], i;

    // Fill array with random numbers from 0 to 99
    for(i = 0; i < 10; i++)
        arr[i] = rand() % 100;

    // Display the array
    printf("Arr: ");
    for(i = 0; i < 10; i++)
        printf("%d  ", arr[i]);
    printf("\n");

    return 0;
}

