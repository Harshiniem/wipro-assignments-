/*
 * Purpose: Calculate the day of the week for a given date (Zeller's Congruence)
 * Author: Harshinie M
 * Date: 19/12/2025
 */

#include <stdio.h>

int main() {
    int d = 11, m = 9, Y = 2004;
    int day;

    // Adjust month and year for January and February
    if (m < 3) {
        m += 12;
        Y -= 1;
    }

    int K = Y % 100; // Year of the century
    int J = Y / 100; // Century

    // Zeller's Congruence formula
    day = (d + 13*(m + 1)/5 + K + K/4 + J/4 + 5*J) % 7;

    // Print the date
    printf("Date: %d/%d/%d\n", d, (m > 12 ? m - 12 : m), (m > 12 ? Y + 1 : Y));

    // Map number to day of the week
    switch(day){
        case 0: printf("Day of the week: Saturday\n"); break;
        case 1: printf("Day of the week: Sunday\n"); break;
        case 2: printf("Day of the week: Monday\n"); break;
        case 3: printf("Day of the week: Tuesday\n"); break;
        case 4: printf("Day of the week: Wednesday\n"); break;
        case 5: printf("Day of the week: Thursday\n"); break;
        case 6: printf("Day of the week: Friday\n"); break;
        default: printf("Error calculating day\n");
    }

    return 0;
}

