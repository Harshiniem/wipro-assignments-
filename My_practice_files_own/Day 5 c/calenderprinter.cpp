/*
 * Purpose: alendar Printer
		Create a function printCalendar() with:
			Day(default = 1)
			Month (default = 12)
			Year (default = 2025)
 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;

void printCalendar(int day = 1, int month = 12, int year = 2025) {
    cout << "Day: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;
}

int main() {
    printCalendar();
    cout << endl;
    printCalendar(15, 8, 2024);

    return 0;
}

