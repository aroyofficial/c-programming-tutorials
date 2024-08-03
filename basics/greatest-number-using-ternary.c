/**
 * @file greatest-number-using-ternary.c
 * @author Arijit Roy (aroy02072000@gmail.com)
 * @brief Write a C program to find the greatest among three numbers using ternary operator.
 * @version 0.1
 * @date 2024-08-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers (separated by space): ");
    scanf("%d %d %d", &a, &b, &c);
    (a > b && a > c) ? printf("%d is the greatest number", a) :
    (b > a && b > c) ? printf("%d is the greatest number", b) :
    printf("%d is the greatest number", c);
    return 0;
}