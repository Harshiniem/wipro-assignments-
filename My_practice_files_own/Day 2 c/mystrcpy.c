/*
 * Purpose: Implement custom strcpy function
 * Author: Harshinie M
 * Date: 22/12/2025
 */
#include <stdio.h>

char* myStrCpy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // terminate the string
    return dest;
}

int main() {
    char src[50] = "Hello";
    char dest[50];
    myStrCpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}

