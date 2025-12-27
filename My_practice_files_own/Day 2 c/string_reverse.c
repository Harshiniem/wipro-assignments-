/*
 * Purpose : Reverse a string
 * Date    : 22/12/2025
 */

#include <stdio.h>

int main() {
    char str[50];
    int i = 0, j;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    /* Find length */
    while (str[i] != '\0') {
        i++;
    }
    j = i - 1;

    /* Reverse */
    i = 0;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

