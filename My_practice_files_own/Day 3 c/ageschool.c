/*
 * Purpose  : Display school or category based on age
 * Author   : Harshini M
 * Date     : 23-12-2025
 */

#include <stdio.h>

int main() {
    char name[25];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Name: %s\n", name);

    if(age >= 21)
        printf("Category: Adult");
    else if(age >= 18)
        printf("Category: Under Graduation");
    else if(age >= 16)
        printf("Category: Pre-University");
    else if(age >= 14)
        printf("Category: High School");
    else if(age >= 11)
        printf("Category: Middle School");
    else if(age >= 5)
        printf("Category: Elementary School");
    else
        printf("Category: Age below school level");

    return 0;
}

