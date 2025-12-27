/*
 * Purpose  : Split a string into words and store in 2D array
 * Author   : Harshinie M
 * Date     : 23-12-2025
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Have a lengthy string here";
    char words[10][20];
    int i = 0, j = 0, k = 0;

    while(str[i] != '\0') {
        if(str[i] != ' ') {
            words[j][k++] = str[i];
        } else {
            words[j][k] = '\0';
            j++;
            k = 0;
        }
        i++;
    }
    words[j][k] = '\0';
    int totalWords = j + 1;

    printf("Words in 2D Array:\n");
    for(i = 0; i < totalWords; i++)
        printf("%s\n", words[i]);

    return 0;
}

