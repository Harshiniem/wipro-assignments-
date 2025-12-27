/*
 * Purpose: Check if a number is prime
 * Author : Harshinie M
 * Date   : 22/12/2025
 */

#include <stdio.h>

/* Function to check prime */
int isPrime(int num) {
    int flag = 1;              // assume number is prime
    for (int cnt = 2; cnt < num; cnt++) {
        if (num % cnt == 0) {  // divisible by any number
            flag = 0;          // not prime
            break;             // no need to check further
        }
    }
    return flag;               // 1 → prime, 0 → not prime
}

int main() {
    printf("Res: %d\n", isPrime(101)); // prime → 1
    printf("Res: %d\n", isPrime(100)); // not prime → 0
}

