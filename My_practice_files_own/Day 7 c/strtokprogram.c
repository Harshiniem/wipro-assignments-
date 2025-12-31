/*
Purpose : Program to demonstrate usage of strtok() to split a string into words
Author  : Harshinie M
Date    : 30-12-2025
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Input string to be tokenized
    char str[] =
        "hey harshinie how are you";

    // First call to strtok: pass string and delimiter
    char *ptr = strtok(str, " ");

    // Loop to get remaining tokens
    while (ptr != NULL)
    {
        // Print each token
        printf("%s\n", ptr);

        // Next calls: pass NULL to continue from previous position
        ptr = strtok(NULL, " ");
    }

    return 0;
}

