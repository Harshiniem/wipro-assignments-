/*
 * Purpose  : Sort names in alphabetical order
 * Author   : Harshinie M
 * Date     : 23-12-2025
 */

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20] = {"Alice", "Bob", "Christine", "David", "Eleanor"};
    char temp[20];
    int i, j;

    for(i = 0; i < 5 - 1; i++) {
        for(j = i + 1; j < 5; j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted Names:\n");
    for(i = 0; i < 5; i++)
        printf("%s\n", names[i]);

    return 0;
}

