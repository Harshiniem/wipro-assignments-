/*
 * Purpose : Calculator using functions
 * Author  : Harshinie M
 * Date    : 22/12/2025
 */

#include <stdio.h>

/* Function to add two numbers */
int add(int a, int b) {
    return a + b;
}

/* Function to subtract two numbers */
int sub(int a, int b) {
    return a - b;
}

/* Function to multiply two numbers */
int mul(int a, int b) {
    return a * b;
}

/* Function to divide two numbers */
float div(int a, int b) {
    return (float)a / b;
}

int main() {
    int x = 10, y = 5;

    printf("Addition       : %d\n", add(x, y));
    printf("Subtraction    : %d\n", sub(x, y));
    printf("Multiplication : %d\n", mul(x, y));
    printf("Division       : %.2f\n", div(x, y));

    return 0;
}

