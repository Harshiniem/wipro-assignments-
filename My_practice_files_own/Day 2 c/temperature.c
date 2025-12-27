/*
 * Purpose : Temperature conversion using functions
 * Author  : Harshinie M
 * Date    : 22/12/2025
 */

#include <stdio.h>

/* Function to convert Celsius to Fahrenheit */
float celsiusToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

/* Function to convert Fahrenheit to Celsius */
float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}

int main() {
    float temp;
    int choice;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        printf("Fahrenheit: %.2f\n", celsiusToFahrenheit(temp));
    } 
    else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("Celsius: %.2f\n", fahrenheitToCelsius(temp));
    } 
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

