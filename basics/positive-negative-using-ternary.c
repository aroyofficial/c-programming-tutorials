/**
 * @file positive-negative-using-ternary.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to check whether a number is positive or negative using ternary operator.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    (n > 0) ? printf("%d is a positive number", n) :
    (n < 0) ? printf("%d is a negative number", n) :
    printf("The given number is zero");
    return 0;
}