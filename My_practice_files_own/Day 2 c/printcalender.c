/*
 * Purpose: Print calendar of a given month and year using functions
 * Author : Harshinie M
 * Date   : 22/12/2025
 */

#include <stdio.h>

/* Function to check if year is leap */
int isLeap(int year) {
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

/* Function to get max days in a month */
int maxDays(int month, int year) {
    if(month == 2) {
        return isLeap(year) ? 29 : 28;
    } else if(month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

/* Function to calculate day of the week (0=Sunday, 1=Monday...) */
int dayOfWeek(int day, int month, int year) {
    if(month < 3) {
        month += 12;
        year -= 1;
    }
    return (day + 2*month + 3*(month+1)/5 + year + year/4 - year/100 + year/400) % 7;
}

/* Function to print the calendar */
void printCalendar(int month, int year) {
    int day = dayOfWeek(1, month, year);
    int daysInMonth = maxDays(month, year);

    printf("Su Mo Tu We Th Fr Sa\n");

    /* Print spaces before first day */
    for(int i = 0; i < day; i++)
        printf("   ");

    for(int i = 1; i <= daysInMonth; i++) {
        printf("%2d ", i);
        if((i + day) % 7 == 0)
            printf("\n");
    }
    printf("\n");
}

int main() {
    int month, year;

    printf("Enter month and year: ");
    scanf("%d %d", &month, &year);

    printCalendar(month, year);

    return 0;
}

