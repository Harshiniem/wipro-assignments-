/*
 * Purpose  : Find and replace substring in a string
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Hello World, welcome to C programming";
    char find[] = "World";
    char replace[] = "Universe";
    char result[200];
    int i = 0, j = 0, k;

    while(str[i] != '\0') {
        int match = 1;
        for(k = 0; find[k] != '\0'; k++) {
            if(str[i + k] != find[k]) {
                match = 0;
                break;
            }
        }

        if(match) {
            // Copy replacement
            for(k = 0; replace[k] != '\0'; k++) {
                result[j++] = replace[k];
            }
            i += strlen(find);
        } else {
            result[j++] = str[i++];
        }
    }
    result[j] = '\0';

    printf("Original: %s\n", str);
    printf("Modified: %s", result);

    return 0;
}

