/*
 * Purpose: Implement the class Calendar with the given data and methods(functions) as given below.
	
		class Calendar{
			int day, month, Year;//private by default
		public:
			void setDate(int dd=1, mm=12, int yyyy=2025);
			bool valideDate();
			int dayOfWeek();
			int maxDays();
			bool isLeap();
			void printCalendar();			
		};
 * Name: Harshinie M
 * Date: 26/12/2025
 */
#include <iostream>
using namespace std;
class Calendar {
	int day, month, year;
public:
    void setDate(int dd = 1, int mm = 12, int yyyy = 2025) {
        day = dd;
        month = mm;
        year = yyyy;
    }

    bool isLeap() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        return false;
    }

    int maxDays() {
        if (month == 2)
            return isLeap() ? 29 : 28;
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            return 30;
        else
            return 31;
    }

    bool valideDate() {
        if (month < 1 || month > 12)
            return false;
        if (day < 1 || day > maxDays())
            return false;
        return true;
    }

    int dayOfWeek() {
        // Simple logic (not advanced formula)
        return (day + month + year) % 7;
    }

    void printCalendar() {
        if (!valideDate()) {
            cout << "Invalid Date" << endl;
            return;
        }

        cout << "Date: " << day << "/" << month << "/" << year << endl;
        cout << "Max Days in Month: " << maxDays() << endl;
        cout << "Leap Year: " << (isLeap() ? "Yes" : "No") << endl;
        cout << "Day of Week Code: " << dayOfWeek() << endl;
    }
};

int main() {
    Calendar c;
    c.setDate(15, 8, 2024);
    c.printCalendar();
    return 0;
}
