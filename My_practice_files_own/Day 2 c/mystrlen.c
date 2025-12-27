/*
 * Purpose: Implement custom strlen function
 * Author: Harshinie M
 * Date: 22/12/2025
 */
#include <stdio.h>

int myStrLen(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char str[50] = "Hello World";
    printf("Length of '%s' is %d\n", str, myStrLen(str));
    return 0;
}

