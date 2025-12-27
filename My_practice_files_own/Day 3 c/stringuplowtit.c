/*
 * Purpose  : Convert string to upper, lower, and title case
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>

int main() {
    char str[] = "have a lengthy string here";
    char upper[50], lower[50], title[50];
    int i;

    // Upper case
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            upper[i] = str[i] - 32;
        else
            upper[i] = str[i];
    }
    upper[i] = '\0';

    // Lower case
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            lower[i] = str[i] + 32;
        else
            lower[i] = str[i];
    }
    lower[i] = '\0';

    // Title case
    int newWord = 1;
    for(i = 0; str[i] != '\0'; i++) {
        if(newWord && str[i] >= 'a' && str[i] <= 'z') {
            title[i] = str[i] - 32;
            newWord = 0;
        } else {
            title[i] = str[i];
            if(str[i] == ' ')
                newWord = 1;
        }
    }
    title[i] = '\0';

    printf("Upper Case: %s\n", upper);
    printf("Lower Case: %s\n", lower);
    printf("Title Case: %s\n", title);

    return 0;
}

