/*
 * Purpose: Implement custom strcmp function
 * Author: Harshinie M
 * Date: 22/12/2025
 */
#include <stdio.h>

int myStrCmp(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // difference of first unmatched character
        }
        i++;
    }
    return str1[i] - str2[i]; // check if one string is longer
}

int main() {
    char str1[50] = "Hello";
    char str2[50] = "Hello";
    int res = myStrCmp(str1, str2);

    if (res == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are NOT equal\n");

    return 0;
}

