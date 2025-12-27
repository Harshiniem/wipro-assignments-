/*
 * Purpose  : Find the longest string from a collection of strings
 * Author   : Harshinie M
 * Date     : 23-12-2025
 */

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {"Alice", "Bob", "Christine", "David", "Eleanor"};
    int i, maxLen = 0, index = 0;

    for(i = 0; i < 5; i++) {
        if(strlen(names[i]) > maxLen) {
            maxLen = strlen(names[i]);
            index = i;
        }
    }

    printf("Longest Name: %s\n", names[index]);
    return 0;
}

