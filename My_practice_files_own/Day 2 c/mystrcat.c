/*
 * Purpose: Implement custom strcat function
 * Author: Harshinie M
 * Date: 22/12/2025
 */
#include <stdio.h>

char* myStrCat(char str1[], const char str2[]) {
    int i = 0, j = 0;

    // find end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // append str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0'; // terminate the string
    return str1;
}

int main() {
    char str1[100] = "Hello ";
    char str2[50] = "World";
    myStrCat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}

