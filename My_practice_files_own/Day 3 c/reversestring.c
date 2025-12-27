/*
 * Purpose  : Reverse a given string
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World";
    int i, len;
    char rev[50];

    len = strlen(str);

    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';

    printf("Reversed String: %s", rev);

    return 0;
}

