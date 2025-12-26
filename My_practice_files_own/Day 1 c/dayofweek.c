/*
 * Purpose : Print calendar of a given month and year
 *           using the starting day of the week
 * Author  : Harshinie M
 * Date    : 19/12/2025
 */

#include <stdio.h>

int main() {
    int month = 12;
    int year = 2025;
    int w = 1;      // 0=Sun, 1=Mon, ..., 6=Sat
    int day;
    int i;

    printf("Month and Year: %d %d\n\n", month, year);

    printf("Su Mo Tu We Th Fr Sa\n");

    // Step 1: Print spaces before 1st day
    for (i = 0; i < w; i++) {
        printf("   ");
    }

    // Step 2: Print dates (assuming 30 days)
    for (day = 1; day <= 30; day++) {
        printf("%2d ", day);

        // Move to next line after Saturday
        if ((day + w) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}

