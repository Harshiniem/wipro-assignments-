/*
 * Purpose : Custom strlen implementation
 * Date    : 22/12/2025
 * Author  : Harshinie M
 */

#include <stdio.h>

int my_strlen(char str[]) {
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    return count;
}

int main() {
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of string = %d\n", my_strlen(str));

    return 0;
}

