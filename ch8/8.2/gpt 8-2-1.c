#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int startYear, endYear,i ;

    printf("Enter the start year: ");
    scanf("%d", &startYear);

    printf("Enter the end year: ");
    scanf("%d", &endYear);

    int leapYears[100]; 
    int leapYearCount = 0;
    int year;

    for (year = startYear; year <= endYear; year++) {
        if (isLeapYear(year)) {
            leapYears[leapYearCount] = year;
            leapYearCount++;
        }
    }

    if (leapYearCount > 0) {
        printf("Leap years between %d and %d:\n", startYear, endYear);
        for ( i = 0; i < leapYearCount; i++) {
            printf("%d\n", leapYears[i]);
        }
    } else {
        printf("No leap years found between %d and %d.\n", startYear, endYear);
    }

    return 0;
}

