/**
 * @file leapyear.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to check whether a given number is leapyear or not.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0) {
        printf("%d is a leap year", year);
    }
    else if (year % 100 != 0 && year % 4 == 0) {
        printf("%d is a leap year", year);
    }
    else {
        printf("%d is not a leap year", year);
    }
    return 0;
}