/*
 * Purpose  : Count words, characters, and spaces in a string
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>

int main() {
    char str[] = "Have a lengthy string here";
    int i, words = 1, chars = 0, spaces = 0;

    for(i = 0; str[i] != '\0'; i++) {
        chars++;
        if(str[i] == ' ')
            spaces++;
    }

    words = spaces + 1; // Words = spaces + 1

    printf("Characters = %d\n", chars);
    printf("Spaces = %d\n", spaces);
    printf("Words = %d\n", words);

    return 0;
}

