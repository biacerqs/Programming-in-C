/*
Author: Beatriz Souza de Cerqueira

Question 1: Write a function that determines the day number (1 to 366) in a year for a
date that is provided as input data. As an example, January 1, 1994, is day 1.
December 31, 1993, is day 365. December 31, 1996, is day 366, since 1996 is
a leap year. A year is a leap year if it is divisible by four, except that any
year divisible by 100 (i.e., the “century” years such as 1800 or 2000) is a leap year only if it is divisible by 400. Your
function should accept the month, day, and year as integers from main as arguments. Include an
additional function leap that returns 1 if called with a leap year, 0 otherwise.

*/

#include <stdio.h>

int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1; // Leap year
    } else {
        return 0; // Not a leap year
    }
}

int dayNumber(int day, int month, int year) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dayNum = day;

    for (int i = 1; i < month; i++) {
        dayNum += daysInMonth[i];
    }

    if (month > 2 && leap(year)) {
        dayNum += 1; //extra day for February in a leap year
    }

    return dayNum;
}

int main() {
    int day, month, year;
    
    printf("CALCULATE DAY OF YEAR\n");
    printf("Enter a date (month day year): ");
    scanf("%d %d %d", &month, &day, &year);

    if (day < 1 || month < 1 || month > 12 || year < 1) {
        printf("Invalid date!\n");
    } else {
        int dayNum = dayNumber(day, month, year);
        printf("Day number:%d\n", dayNum);
    }

    return 0;
}


